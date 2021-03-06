(* ****** ****** *)

staload "lambda.sats"

(* ****** ****** *)

implement
print_vnam(x) = fprint(stdout_ref, x)
implement
prerr_vnam(x) = fprint(stderr_ref, x)

(* ****** ****** *)

local

assume vnam = string

in (* in-of-local *)

implement
fprint_vnam (out, x) = fprint_string (out, x)

implement
compare_vnam_vnam(x, y) = compare_string_string(x, y)

end // end of [local]

(* ****** ****** *)

(* end of [lambda_vnam.dats] *)