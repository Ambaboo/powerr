% Generated by roxygen2 (4.0.2): do not edit by hand
\name{\%--\%}
\alias{\%--\%}
\title{Binary operator \%--\%}
\usage{
x \%--\% y
}
\arguments{
\item{x,y}{parameters on the other side of the operator}
}
\description{
Binary operator which minus sparse matrix including complex numbers
When is not in sparse mode (Settings$sparse == FALSE), '\%--\%' is same as '-'
WHen in sparse mode, '\%--\%'support complex sparse matrix created by powerMatrix
}
\examples{
\donttest{
# in sparse mode
a <- powerMatrix(2, 1, x = 1, dims = c(3,3), useSparse = TRUE)
b <- powerMatrix(c(2,3), c(1,2), x = c(1-1i, 3+4i), dims = c(3,3), useSparse = TRUE)
a \%--\% b
# $mRe
# 3 x 3 sparse Matrix of class "dgCMatrix"
#
# [1,] .  . .
# [2,] 0  . .
# [3,] . -3 .
#
# $mIm
# 3 x 3 sparse Matrix of class "dgCMatrix"
#
# [1,]  . . .
# [2,] -1 . .
# [3,]  . 4 .
}
}

