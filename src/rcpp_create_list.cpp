#include <Rcpp.h>
using namespace Rcpp;

//' @importFrom Rcpp evalCpp
//' @export
// [[Rcpp::export]]
SEXP rcpp_create_list() {
	Rcpp::List l(1);
	l[0] = "foo";
	return l;
}


//' @export
// [[Rcpp::export]]
void rcpp_dont_return_list() {
  Rcpp::List l = rcpp_create_list();
	Rcpp::StringVector sv = l[0];
	Rcpp::Rcout << "first element: " << sv << std::endl;
}

