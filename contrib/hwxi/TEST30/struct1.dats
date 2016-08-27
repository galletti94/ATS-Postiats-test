#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

%{^
struct foo;
struct bar {
  int x;
  struct foo *p;
};
struct foo {
  int x;
  struct bar *p;
  struct bar **pp;
};


int
struct_foo_ptr_get_x (struct foo *obj) { return obj->x ; }
void*
struct_foo_ptr_get_p (struct foo *obj) { return obj->p ; }
void*
struct_foo_ptr_get_pp (struct foo *obj) { return obj->pp ; }
int
struct_bar_ptr_get_x (struct bar *obj) { return obj->x ; }
void*
struct_bar_ptr_get_p (struct bar *obj) { return obj->p ; }

%}

(* ****** ****** *)

vtypedef
struct_foo = $extype_struct
"struct foo" of
{
  x= int
, p= Ptr0
, pp= Ptr0
}

vtypedef
struct_bar = $extype_struct
"struct bar" of
{
  x= int
, p= Ptr0
}

(* ****** ****** *)
//
extern
fun
struct_foo_ptr_get_x
  : (!aPtr1(struct_foo)) -> int = "mac#"
extern
fun
struct_foo_ptr_get_p
  : (!aPtr1(struct_foo)) -> aPtr0(struct_bar) = "mac#"
extern
fun
struct_foo_ptr_get_pp
  : (!aPtr1(struct_foo)) -> aPtr0(aPtr0(struct_bar)) = "mac#"
//
overload .x with struct_foo_ptr_get_x
overload .p with struct_foo_ptr_get_p
overload .pp with struct_foo_ptr_get_pp
//
(* ****** ****** *)

extern
fun
struct_bar_ptr_get_x
  : (!aPtr1(struct_bar)) -> int = "mac#"
extern
fun
struct_bar_ptr_get_p
  : (!aPtr1(struct_bar)) -> aPtr0(struct_foo) = "mac#"
//
overload .x with struct_bar_ptr_get_x
overload .p with struct_bar_ptr_get_p
//
(* ****** ****** *)

implement
main0 () = {
//
  var vfoo : struct_foo
  var vbar : struct_bar
//
  val () = vfoo.x := 0
  val () = vfoo.p := addr@vbar
  val () = vfoo.pp := addr@(vfoo.p)
//
  val () = vbar.x := 1
  val () = vbar.p := addr@vfoo
//
  val pfoo = $UN.castvwtp0{aPtr1(struct_foo)}(addr@vfoo)
  val pbar = $UN.castvwtp0{aPtr1(struct_foo)}(addr@vbar)
//
  val () = println! ("foo.x = ", pfoo.x())
  val pfoo_p = pfoo.p()
  val () = assertloc(isneqz(pfoo_p))
  val () = println! ("foo.p.x = ", pfoo_p.x())
  prval () = $UN.cast2void(pfoo_p)
//
  val () = println! ("bar.x = ", pbar.x())
  val pbar_p = pbar.p()
  val () = assertloc(isneqz(pbar_p))
  val () = println! ("bar.p.x = ", pbar_p.x())
  prval () = $UN.cast2void(pbar_p)
//
  prval () = $UN.cast2void(pfoo) and () = $UN.cast2void(pbar)
//
} (* end of [main0] *)

(* ****** ****** *)

(* end of [struct1.dats] *)
