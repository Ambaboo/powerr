% Generated by roxygen2 (4.0.2): do not edit by hand
\name{powerMatrix}
\alias{powerMatrix}
\title{powerMatrix}
\usage{
powerMatrix(rowIndex, columnIndex, x, dims,
  useSparse = .GlobalEnv$Settings$sparse)
}
\arguments{
\item{rowIndex}{row index of nonzeros}

\item{columnIndex}{column index of nonzeros}

\item{x}{value in corresponding nonzero index}

\item{dims}{dimension of the sparse matrix to be created}

\item{useSparse}{global variable which controls sparse or not}
}
\value{
matrix used in powerr analysis
}
\description{
Create dense or sparse matrix for power system analysis usage
}
\examples{
# don't use sparse
powerMatrix(1, 1, x = 1, dims = c(3,3), useSparse = FALSE)
# use sparse
# real matrix
powerMatrix(1, 1, x = 1, dims = c(3,3), useSparse = TRUE) # 3 x 3 sparse Matrix of class "dgCMatrix"
# complex matrix
powerMatrix(1, 1, x = 1 + 1i, dims = c(3,3), useSparse = TRUE)
# $mRe
# 3 x 3 sparse Matrix of class "dgCMatrix"
# $mIm
# 3 x 3 sparse Matrix of class "dgCMatrix"
}

