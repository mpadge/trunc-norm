// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_trunc_ndist
Rcpp::NumericVector rcpp_trunc_ndist(int len, double sd);
RcppExport SEXP tnorm_rcpp_trunc_ndist(SEXP lenSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    __result = Rcpp::wrap(rcpp_trunc_ndist(len, sd));
    return __result;
END_RCPP
}
