#include "c_ask_for_list.h"

SEXP c_ask_for_list () {
	SEXP l = PROTECT(allocVector(VECSXP, 1));
	l = rcpp_create_list();          // Call the C++ function to create the list
	UNPROTECT(1);
	return(l);
}
