#include <Rcpp.h>
using namespace Rcpp;

//' @importFrom Rcpp evalCpp
//' @export
// [[Rcpp::export]]
SEXP rcpp_create_list() {
	Rcpp::List l(2);
	l[0] = "foo";
	l[1] = "bar";
	return l;
}