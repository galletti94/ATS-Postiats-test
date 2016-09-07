(* ****** ****** *)
//
implement
theWormlike_scene1
  ((*void*)) = let
//
val G = theGamebd_get()
//
in
//
G.foreach()
(
lam(i, j) =>
if (i = j) then
(
  if i >= NCOL/8 then if i < 7*NCOL/8 then G[i,j] := XN1(~1)
) (* end of [if] *)
)
//
;
//
G.foreach()
(
lam(i, j) =>
if (i = j) then
(
  if i >= NROW/8 then if i < 7*NROW/8 then G[i,NCOL-1-j] := XN1(~1)
) (* end of [if] *)
)
//
end // end of [theWormlike_scene1]
//
(* ****** ****** *)
//
implement
theWormlike_scene2
  ((*void*)) = let
//
val G = theGamebd_get()
//
in
//
G.foreach()
(
lam(i, j) =>
(
  if i >= NROW/8 then if i < 7*NROW/8 then
  if j >= NCOL/8 then if j < 7*NCOL/8 then G[i,j] := XN1(~1)  
) (* end of [lam] *)
)
//
end // end of [theWormlike_scene2]
//
(* ****** ****** *)

implement
theWormlike_bonus_rand
  (n) = let
//
val G0 = theGamebd_get()
//
fun I(): int =
  double2int(
    ($Random.random()*0.999999)*(NROW)
  ) (* double2int *)
fun J(): int =
  double2int(
    ($Random.random()*0.999999)*(NCOL)
  ) (* double2int *)
//
fun
aux(): void = let
  val i = I()
  and j = J()
  val xn = G0[i, j]
in
  case+ xn of
  | XN1 _ => ()
  | XN0() => (G0[i, j] := XN1(1))
end // end of [aux1]
//
in
  n.foreach((*void*))(lam(_) => aux())
end // end of [theWormlike_bonus_rand]

(* ****** ****** *)

(* end of [Wormlist_setup.dats] *)
