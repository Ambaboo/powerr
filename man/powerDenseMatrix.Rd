% Generated by roxygen2 (4.0.2): do not edit by hand
\name{powerDenseMatrix}
\alias{powerDenseMatrix}
\title{powerDenseMatrix}
\usage{
powerDenseMatrix(rowIndex, columnIndex, x, dims)
}
\arguments{
\item{rowIndex}{specify the location of row of non-zero entries in the matrix}

\item{columnIndex}{specify the location of column of non-zero entries in the matrix}

\item{x}{non-zero entries on these certain locations}

\item{dims}{dimention of the matrix}
}
\value{
dense matrix used in powerr analysis
}
\description{
create dense matrix with row and column index
}
\examples{
powerDenseMatrix(1, 1, x = 1, dims = c(3,3))
}

