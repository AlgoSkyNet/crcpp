#include "c_ask_for_list.h"

SEXP c_ask_for_list () {
	SEXP l = _crcpp_rcpp_create_list();          // Call the C++ function to create the list
	return l;
}