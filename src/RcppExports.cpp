// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// eigenAB
SEXP eigenAB(SEXP AA, SEXP BB);
RcppExport SEXP _MARSS_eigenAB(SEXP AASEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenAB(AA, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapAB
SEXP eigenMapAB(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MARSS_eigenMapAB(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapAB(A, B));
    return rcpp_result_gen;
END_RCPP
}
// eigenAtB
SEXP eigenAtB(SEXP AA, SEXP BB);
RcppExport SEXP _MARSS_eigenAtB(SEXP AASEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenAtB(AA, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapAtB
SEXP eigenMapAtB(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MARSS_eigenMapAtB(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapAtB(A, B));
    return rcpp_result_gen;
END_RCPP
}
// eigenAb
SEXP eigenAb(SEXP AA, SEXP bb);
RcppExport SEXP _MARSS_eigenAb(SEXP AASEXP, SEXP bbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type bb(bbSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenAb(AA, bb));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapAb
SEXP eigenMapAb(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::VectorXd> b);
RcppExport SEXP _MARSS_eigenMapAb(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapAb(A, b));
    return rcpp_result_gen;
END_RCPP
}
// eigenaBa
SEXP eigenaBa(SEXP aa, SEXP BB);
RcppExport SEXP _MARSS_eigenaBa(SEXP aaSEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type aa(aaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenaBa(aa, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapaBa
SEXP eigenMapaBa(const Eigen::Map<Eigen::VectorXd> a, Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MARSS_eigenMapaBa(SEXP aSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type a(aSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapaBa(a, B));
    return rcpp_result_gen;
END_RCPP
}
// eigentAB
SEXP eigentAB(SEXP AA, SEXP BB);
RcppExport SEXP _MARSS_eigentAB(SEXP AASEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigentAB(AA, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenMaptAB
SEXP eigenMaptAB(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _MARSS_eigenMaptAB(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMaptAB(A, B));
    return rcpp_result_gen;
END_RCPP
}
// eigenAtBC
SEXP eigenAtBC(SEXP AA, SEXP BB, SEXP CC);
RcppExport SEXP _MARSS_eigenAtBC(SEXP AASEXP, SEXP BBSEXP, SEXP CCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CC(CCSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenAtBC(AA, BB, CC));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapAtBC
SEXP eigenMapAtBC(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B, Eigen::Map<Eigen::MatrixXd> C);
RcppExport SEXP _MARSS_eigenMapAtBC(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapAtBC(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// eigenABC
SEXP eigenABC(SEXP AA, SEXP BB, SEXP CC);
RcppExport SEXP _MARSS_eigenABC(SEXP AASEXP, SEXP BBSEXP, SEXP CCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CC(CCSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenABC(AA, BB, CC));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapABC
SEXP eigenMapABC(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B, Eigen::Map<Eigen::MatrixXd> C);
RcppExport SEXP _MARSS_eigenMapABC(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapABC(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// eigenABtA
SEXP eigenABtA(SEXP AA, SEXP BB);
RcppExport SEXP _MARSS_eigenABtA(SEXP AASEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenABtA(AA, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenABtAA
SEXP eigenABtAA(Rcpp::NumericMatrix AA, Rcpp::NumericMatrix BB);
RcppExport SEXP _MARSS_eigenABtAA(SEXP AASEXP, SEXP BBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type AA(AASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type BB(BBSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenABtAA(AA, BB));
    return rcpp_result_gen;
END_RCPP
}
// eigenABtC
SEXP eigenABtC(SEXP AA, SEXP BB, SEXP CC);
RcppExport SEXP _MARSS_eigenABtC(SEXP AASEXP, SEXP BBSEXP, SEXP CCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    Rcpp::traits::input_parameter< SEXP >::type BB(BBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type CC(CCSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenABtC(AA, BB, CC));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapABtC
SEXP eigenMapABtC(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B, Eigen::Map<Eigen::MatrixXd> C);
RcppExport SEXP _MARSS_eigenMapABtC(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapABtC(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// eigenSymm
SEXP eigenSymm(SEXP AA);
RcppExport SEXP _MARSS_eigenSymm(SEXP AASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AA(AASEXP);
    rcpp_result_gen = Rcpp::wrap(eigenSymm(AA));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapSymm
SEXP eigenMapSymm(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MARSS_eigenMapSymm(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapSymm(A));
    return rcpp_result_gen;
END_RCPP
}
// getDeterminant
SEXP getDeterminant(Rcpp::NumericMatrix AA);
RcppExport SEXP _MARSS_getDeterminant(SEXP AASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type AA(AASEXP);
    rcpp_result_gen = Rcpp::wrap(getDeterminant(AA));
    return rcpp_result_gen;
END_RCPP
}
// getMapDeterminant
SEXP getMapDeterminant(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _MARSS_getMapDeterminant(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(getMapDeterminant(A));
    return rcpp_result_gen;
END_RCPP
}
// dMat
SEXP dMat(Rcpp::NumericVector aa, int r, int c);
RcppExport SEXP _MARSS_dMat(SEXP aaSEXP, SEXP rSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type aa(aaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(dMat(aa, r, c));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MARSS_eigenAB", (DL_FUNC) &_MARSS_eigenAB, 2},
    {"_MARSS_eigenMapAB", (DL_FUNC) &_MARSS_eigenMapAB, 2},
    {"_MARSS_eigenAtB", (DL_FUNC) &_MARSS_eigenAtB, 2},
    {"_MARSS_eigenMapAtB", (DL_FUNC) &_MARSS_eigenMapAtB, 2},
    {"_MARSS_eigenAb", (DL_FUNC) &_MARSS_eigenAb, 2},
    {"_MARSS_eigenMapAb", (DL_FUNC) &_MARSS_eigenMapAb, 2},
    {"_MARSS_eigenaBa", (DL_FUNC) &_MARSS_eigenaBa, 2},
    {"_MARSS_eigenMapaBa", (DL_FUNC) &_MARSS_eigenMapaBa, 2},
    {"_MARSS_eigentAB", (DL_FUNC) &_MARSS_eigentAB, 2},
    {"_MARSS_eigenMaptAB", (DL_FUNC) &_MARSS_eigenMaptAB, 2},
    {"_MARSS_eigenAtBC", (DL_FUNC) &_MARSS_eigenAtBC, 3},
    {"_MARSS_eigenMapAtBC", (DL_FUNC) &_MARSS_eigenMapAtBC, 3},
    {"_MARSS_eigenABC", (DL_FUNC) &_MARSS_eigenABC, 3},
    {"_MARSS_eigenMapABC", (DL_FUNC) &_MARSS_eigenMapABC, 3},
    {"_MARSS_eigenABtA", (DL_FUNC) &_MARSS_eigenABtA, 2},
    {"_MARSS_eigenABtAA", (DL_FUNC) &_MARSS_eigenABtAA, 2},
    {"_MARSS_eigenABtC", (DL_FUNC) &_MARSS_eigenABtC, 3},
    {"_MARSS_eigenMapABtC", (DL_FUNC) &_MARSS_eigenMapABtC, 3},
    {"_MARSS_eigenSymm", (DL_FUNC) &_MARSS_eigenSymm, 1},
    {"_MARSS_eigenMapSymm", (DL_FUNC) &_MARSS_eigenMapSymm, 1},
    {"_MARSS_getDeterminant", (DL_FUNC) &_MARSS_getDeterminant, 1},
    {"_MARSS_getMapDeterminant", (DL_FUNC) &_MARSS_getMapDeterminant, 1},
    {"_MARSS_dMat", (DL_FUNC) &_MARSS_dMat, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_MARSS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
