// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// points_cpp
List points_cpp(NumericMatrix pts, CharacterVector gdim);
RcppExport SEXP _sfcc_points_cpp(SEXP ptsSEXP, SEXP gdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pts(ptsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type gdim(gdimSEXP);
    rcpp_result_gen = Rcpp::wrap(points_cpp(pts, gdim));
    return rcpp_result_gen;
END_RCPP
}
// multipoints_cpp
List multipoints_cpp(NumericMatrix pts, IntegerVector scanindex, CharacterVector gdim);
RcppExport SEXP _sfcc_multipoints_cpp(SEXP ptsSEXP, SEXP scanindexSEXP, SEXP gdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pts(ptsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type scanindex(scanindexSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type gdim(gdimSEXP);
    rcpp_result_gen = Rcpp::wrap(multipoints_cpp(pts, scanindex, gdim));
    return rcpp_result_gen;
END_RCPP
}
// polygons_cpp
List polygons_cpp(List data_x, CharacterVector topology, CharacterVector gdim, LogicalVector classme);
RcppExport SEXP _sfcc_polygons_cpp(SEXP data_xSEXP, SEXP topologySEXP, SEXP gdimSEXP, SEXP classmeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type data_x(data_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type topology(topologySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type gdim(gdimSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type classme(classmeSEXP);
    rcpp_result_gen = Rcpp::wrap(polygons_cpp(data_x, topology, gdim, classme));
    return rcpp_result_gen;
END_RCPP
}
