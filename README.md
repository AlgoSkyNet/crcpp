# crcpp
A testing and development package for communicating between C and C++
---

This R function calls a `C` function

```r

#' @useDynLib crcpp c_ask_for_list
r_ask_for_list <- function() {
	.Call(c_ask_for_list)
}
```

I would like this `C` function to call the `C++` function to create and return the list

```c
#include <Rinternals.h>

SEXP c_ask_for_list (){
	SEXP l = PROTECT(allocVector(VECSXP, 1));
	//l = rcpp_create_list();          // Call the C++ function to create the list
	UNPROTECT(1);
	return(l);
}

```

```cpp
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
extern "C" SEXP rcpp_create_list() {
	Rcpp::List l(1);
	l[0] = "foo";
	return l;
}
```
