#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
extern "C" SEXP rcpp_create_list() {
	Rcpp::List l(1);
	l[0] = "foo";
	return l;
}


extern "C" void rcpp_dont_return_list() {
  Rcpp::List l = rcpp_create_list();
	Rcpp::StringVector sv = l[0];
	Rcpp::Rcout << "first element: " << sv << std::endl;
}

