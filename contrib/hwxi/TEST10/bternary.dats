(*
** This one is
** translated into ATS from the Ocaml entry
*)
 
(* ****** ****** *)
//
// How to compile:
// patscc -DATS_MEMALLOC_LIBC -o bternary bternary.dats
//
(* ****** ****** *)
//
#include
"share/atspre_staload.hats"
#include
"share/atspre_staload_libats_ML.hats"
// 
(* ****** ****** *)
// 
datatype btd = P|Z|N; typedef btern = List0(btd)
//
(* ****** ****** *)
// 
fun
btd2int (d: btd): int =
  (case+ d of P() => 1 | Z() => 0 | N() => ~1)
//
(* ****** ****** *)
 
fun
btd2string (d:btd): string =
(
case+ d of P() => "+" | Z() => "0" | N() => "-"
)
 
(* ****** ****** *)
 
fun
btern2string
(
  ds: btern
) : string = res where
{
  val xs = list_map_cloref (ds, lam d => btd2string(d))
  val xs = list_vt_reverse (xs)
  val res = stringlst_concat($UNSAFE.castvwtp1{list0(string)}(xs))
  val ((*void*)) = list_vt_free<string> (xs)
}
 
(* ****** ****** *)
 
fun
from_string
  (inp: string): btern = let
//
fun
loop{n:nat}
(
  inp: string(n), ds: btern
) : btern =
(
//
  if isneqz(inp)
    then let
      val c = inp.head()
      val d =
        (case- c of '+' => P | '0' => Z | '-' => N): btd
      // end of [val]
    in
      loop (inp.tail(), list_cons(d, ds))
    end // end of [then]
    else ds // end of [else]
//
) (* end of [loop] *)
//
in
  loop (g1ofg0(inp), list_nil)
end // end of [from_string]
 
(* ****** ****** *)
 
fun
to_int (ds: btern): int =
(
case+ ds of
| list_nil () => 0
| list_cons (d, ds) => 3*to_int(ds) + btd2int(d)
) (* end of [to_int] *)
 
fun
from_int (n: int): btern =
(
if
n = 0
then list_nil
else let
  val r = n mod 3
in
  if r = 0
    then list_cons (Z, from_int (n/3))
    else if (r = 1 || r = ~2)
           then list_cons (P, from_int ((n-1)/3))
           else list_cons (N, from_int ((n+1)/3))
end // end of [else]
) (* end of [from_int] *)
 
(* ****** ****** *)
 
fun
neg_btern
  (ds: btern): btern =
list_vt2t
(
list_map_cloref<btd><btd>
  (ds, lam d => case+ d of P() => N() | Z() => Z() | N() => P())
) (* end of [neg_btern] *)
 
overload ~ with neg_btern
 
(* ****** ****** *)
//
extern
fun
add_btern_btern: (btern, btern) -> btern
and
sub_btern_btern: (btern, btern) -> btern
//
overload + with add_btern_btern of 100
overload - with sub_btern_btern of 100
//
extern
fun
mul_btern_btern: (btern, btern) -> btern
//
overload * with mul_btern_btern of 110
//
(* ****** ****** *)
 
#define :: list_cons
 
(* ****** ****** *)
 
local
 
fun aux0 (ds: btern): btern =
(
  case+ ds of nil() => ds | _ => Z()::ds
)
 
fun succ(ds:btern) = ds+list_sing(P())
fun pred(ds:btern) = ds+list_sing(N())
 
in (* in-of-local *)
 
implement
add_btern_btern
  (ds1, ds2) =
(
case+ (ds1, ds2) of
| (nil(), _) => ds2
| (_, nil()) => ds1
| (P()::ds1, N()::ds2) => aux0 (ds1+ds2)
| (Z()::ds1, Z()::ds2) => aux0 (ds1+ds2)
| (N()::ds1, P()::ds2) => aux0 (ds1+ds2)
| (P()::ds1, P()::ds2) => N() :: succ(ds1 + ds2)
| (N()::ds1, N()::ds2) => P() :: pred(ds1 + ds2)
| (Z()::ds1, btd::ds2) => btd :: (ds1 + ds2)
| (btd::ds1, Z()::ds2) => btd :: (ds1 + ds2)
)
 
implement
sub_btern_btern (ds1, ds2) = ds1 + (~ds2)
 
implement
mul_btern_btern (ds1, ds2) =
(
case+ ds2 of
| nil() => nil()
| Z()::ds2 => aux0 (ds1 * ds2)
| P()::ds2 => aux0 (ds1 * ds2) + ds1
| N()::ds2 => aux0 (ds1 * ds2) - ds1
)
 
end // end of [local]
 
(* ****** ****** *)
 
typedef charptr = $extype"char*"
 
(* ****** ****** *)
 
implement main0 () =
{
//
val a =
from_string "+-0++0+"
//
val b = from_int (~436)
val c = from_string "+-++-"
//
val d = a * (b - c)
//
val () =
$extfcall
(
  void
, "printf"
, "a = %d\nb = %d\nc = %d\na * (b - c) = %s = %d\n"
, to_int(a)
, to_int(b)
, to_int(c)
, $UNSAFE.cast{charptr}(btern2string(d))
, to_int(d)
) (* end of [val] *)
//
} (* end of [main0] *)

(* ****** ****** *)

(* end of [bternary.dats] *)
