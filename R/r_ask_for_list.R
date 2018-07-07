
#' Ask for a List from R
#'
#' TBD
#' @return A list
#' @useDynLib crcpp
#' @export
r_ask_for_list <- function() {
	.Call("c_ask_for_list", package="crcpp")
}