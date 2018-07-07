
#' @useDynLib crcpp c_ask_for_list
#' @export
r_ask_for_list <- function() {
	.Call(c_ask_for_list)
}