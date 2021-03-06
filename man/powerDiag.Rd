% Generated by roxygen2 (4.0.2): do not edit by hand
\name{powerDiag}
\alias{powerDiag}
\title{powerDiag}
\usage{
powerDiag(x)
}
\arguments{
\item{x}{complex or real number sparse matrix needed to be calculated diag}
}
\value{
TRUE means there is a number at that index, FALSE means not.
}
\description{
return Matrix::diag components of either complex or real number sparse matrix
}
\examples{
x <- sparseMatrix(1, 1, x = 1, dims = c(3,3)) # 3 x 3 sparse Matrix of class "dgCMatrix"
powerDiag(x) # [1] 1 0 0
}

