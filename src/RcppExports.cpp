// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// powerSparseProduct
Rcpp::List powerSparseProduct(const Eigen::MappedSparseMatrix<double>& mRe1, const Eigen::MappedSparseMatrix<double>& mIm1, const Eigen::MappedSparseMatrix<double>& mRe2, const Eigen::MappedSparseMatrix<double>& mIm2);
RcppExport SEXP powerr_powerSparseProduct(SEXP mRe1SEXP, SEXP mIm1SEXP, SEXP mRe2SEXP, SEXP mIm2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double>& >::type mRe1(mRe1SEXP );
        Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double>& >::type mIm1(mIm1SEXP );
        Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double>& >::type mRe2(mRe2SEXP );
        Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double>& >::type mIm2(mIm2SEXP );
        Rcpp::List __result = powerSparseProduct(mRe1, mIm1, mRe2, mIm2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcppeigen_hello_world
Eigen::MatrixXd rcppeigen_hello_world();
RcppExport SEXP powerr_rcppeigen_hello_world() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Eigen::MatrixXd __result = rcppeigen_hello_world();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcppeigen_outerproduct
Eigen::MatrixXd rcppeigen_outerproduct(const Eigen::VectorXd& x);
RcppExport SEXP powerr_rcppeigen_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP );
        Eigen::MatrixXd __result = rcppeigen_outerproduct(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcppeigen_innerproduct
double rcppeigen_innerproduct(const Eigen::VectorXd& x);
RcppExport SEXP powerr_rcppeigen_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP );
        double __result = rcppeigen_innerproduct(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcppeigen_bothproducts
Rcpp::List rcppeigen_bothproducts(const Eigen::VectorXd& x);
RcppExport SEXP powerr_rcppeigen_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP );
        Rcpp::List __result = rcppeigen_bothproducts(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}