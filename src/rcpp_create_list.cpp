#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
extern "C" SEXP rcpp_create_list() {
	Rcpp::List l(1);
	l[0] = "foo";
	return l;
}
