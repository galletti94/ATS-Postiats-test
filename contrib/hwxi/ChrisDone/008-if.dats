(* If expressions. *)

#include
"share/atspre_staload.hats"

(* Some binding to use. *)
val x = 3

(* If expression can have two branches: *)
val neg =
  if x >= 0
     then x
     else ~x

implement main0 () = ()
