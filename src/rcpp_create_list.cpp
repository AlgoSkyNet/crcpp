#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
extern "C" SEXP rcpp_create_list() {
	Rcpp::List l(2);
	l[0] = "foo";
	l[1] = "bar";
	return l;
}