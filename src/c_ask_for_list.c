#include <Rinternals.h>

SEXP _crcpp_rcpp_create_list();  /* need a declaration */

SEXP c_ask_for_list() {
	REprintf("In c_ask_for_list");
	//SEXP l = PROTECT(allocVector(VECSXP, 1));
	SEXP l = _crcpp_rcpp_create_list();
	//l = rcpp_create_list();          // Call the C++ function to create the list
	//rcpp_dont_return_list();
	//UNPROTECT(1);
	return(l);
}
