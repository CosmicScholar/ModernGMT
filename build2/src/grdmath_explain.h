/*--------------------------------------------------------------------
 *
 *
 *  Copyright (c) 1991-2018 by P. Wessel, W. H. F. Smith, R. Scharroo,
 *  F. Wobbe, and J. Luis
 *  See LICENSE.TXT file for copying and redistribution conditions.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; version 3 or any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  Contact info: gmt.soest.hawaii.edu
 *--------------------------------------------------------------------
 *
 *  grdmath_explain.h is automatically generated by CMake. Do NOT edit manually!
 */

	GMT_Message (API, GMT_TIME_NONE, 
		"	ABS        1  1    abs (A)\n"
		"	ACOS       1  1    acos (A)\n"
		"	ACOSH      1  1    acosh (A)\n"
		"	ACOT       1  1    acot (A)\n"
		"	ACOTH      1  1    acoth (A)\n"
		"	ACSC       1  1    acsc (A)\n"
		"	ACSCH      1  1    acsch (A)\n"
		"	ADD        2  1    A + B\n"
		"	AND        2  1    B if A == NaN, else A\n"
		"	ARC        2  1    arc(A, B) = pi - |pi - |a-b|| for A, B in radians\n"
		"	AREA       0  1    Area of each gridnode cell (spherical calculation in km^2 if geographic)\n"
		"	ASEC       1  1    asec (A)\n"
		"	ASECH      1  1    asech (A)\n"
		"	ASIN       1  1    asin (A)\n"
		"	ASINH      1  1    asinh (A)\n"
		"	ATAN       1  1    atan (A)\n"
		"	ATAN2      2  1    atan2 (A, B)\n"
		"	ATANH      1  1    atanh (A)\n"
		"	BCDF       3  1    Binomial cumulative distribution function for p = A, n = B and x = C\n"
		"	BPDF       3  1    Binomial probability density function for p = A, n = B and x = C\n"
		"	BEI        1  1    bei (A)\n"
		"	BER        1  1    ber (A)\n"
		"	BITAND     2  1    A & B (bitwise AND operator)\n"
		"	BITLEFT    2  1    A << B (bitwise left-shift operator)\n"
		"	BITNOT     1  1    ~A (bitwise NOT operator, i.e., return two's complement)\n"
		"	BITOR      2  1    A | B (bitwise OR operator)\n"
		"	BITRIGHT   2  1    A >> B (bitwise right-shift operator)\n"
		"	BITTEST    2  1    1 if bit B of A is set, else 0 (bitwise TEST operator)\n"
		"	BITXOR     2  1    A ^ B (bitwise XOR operator)\n"
		"	CAZ        2  1    Cartesian azimuth from grid nodes to stack x,y\n"
		"	CBAZ       2  1    Cartesian back-azimuth from grid nodes to stack x,y\n"
		"	CDIST      2  1    Cartesian distance between grid nodes and stack x,y\n"
		"	CDIST2     2  1    As CDIST but only to nodes that are != 0\n"
		"	CEIL       1  1    ceil (A) (smallest integer >= A)\n"
		"	CHI2CRIT   2  1    Chi-squared distribution critical value for alpha = A and nu = B\n"
		"	CHI2CDF    2  1    Chi-squared cumulative distribution function for chi2 = A and nu = B\n"
		"	CHI2PDF    2  1    Chi-squared probability density function for chi = A and nu = B\n"
		"	COMB       2  1    Combinations n_C_r, with n = A and r = B\n"
		"	CORRCOEFF  2  1    Correlation coefficient r(A, B)\n"
		"	COS        1  1    cos (A) (A in radians)\n"
		"	COSD       1  1    cos (A) (A in degrees)\n"
		"	COSH       1  1    cosh (A)\n"
		"	COT        1  1    cot (A) (A in radians)\n"
		"	COTD       1  1    cot (A) (A in degrees)\n"
		"	COTH       1  1    coth (A)\n"
		"	PCDF       2  1    Poisson cumulative distribution function x = A and lambda = B\n"
		"	PPDF       2  1    Poisson probability density function for x = A and lambda = B\n"
		"	CSC        1  1    csc (A) (A in radians)\n"
		"	CSCD       1  1    csc (A) (A in degrees)\n"
		"	CSCH       1  1    csch (A)\n"
		"	CURV       1  1    Curvature of A (Laplacian)\n"
		"	D2DX2      1  1    d^2(A)/dx^2 2nd derivative\n"
		"	D2DY2      1  1    d^2(A)/dy^2 2nd derivative\n"
		"	D2DXY      1  1    d^2(A)/dxdy 2nd derivative\n"
		"	D2R        1  1    Converts Degrees to Radians\n"
		"	DDX        1  1    d(A)/dx Central 1st derivative\n"
		"	DDY        1  1    d(A)/dy Central 1st derivative\n"
		"	DEG2KM     1  1    Converts Spherical Degrees to Kilometers\n"
		"	DENAN      2  1    Replace NaNs in A with values from B\n"
		"	DILOG      1  1    dilog (A)\n"
		"	DIV        2  1    A / B\n"
		"	DUP        1  2    Places duplicate of A on the stack\n"
		"	ECDF       2  1    Exponential cumulative distribution function for x = A and lambda = B\n"
		"	ECRIT      2  1    Exponential distribution critical value for alpha = A and lambda = B\n"
		"	EPDF       2  1    Exponential probability density function for x = A and lambda = B\n"
		"	ERF        1  1    Error function erf (A)\n"
		"	ERFC       1  1    Complementary Error function erfc (A)\n"
		"	EQ         2  1    1 if A == B, else 0\n"
		"	ERFINV     1  1    Inverse error function of A\n"
		"	EXCH       2  2    Exchanges A and B on the stack\n"
		"	EXP        1  1    exp (A)\n"
		"	FACT       1  1    A! (A factorial)\n"
		"	EXTREMA    1  1    Local Extrema: +2/-2 is max/min, +1/-1 is saddle with max/min in x, 0 elsewhere\n"
		"	FCRIT      3  1    F distribution critical value for alpha = A, nu1 = B, and nu2 = C\n"
		"	FCDF       3  1    F cumulative distribution function for F = A, nu1 = B, and nu2 = C\n"
		"	FLIPLR     1  1    Reverse order of values in each row\n"
		"	FLIPUD     1  1    Reverse order of values in each column\n"
		"	FLOOR      1  1    floor (A) (greatest integer <= A)\n"
		"	FMOD       2  1    A % B (remainder after truncated division)\n"
		"	FPDF       3  1    F probability density function for F = A, nu1 = B and nu2 = C\n"
		"	GE         2  1    1 if A >= B, else 0\n"
		"	GT         2  1    1 if A > B, else 0\n"
		"	HYPOT      2  1    hypot (A, B) = sqrt (A*A + B*B)\n"
		"	I0         1  1    Modified Bessel function of A (1st kind, order 0)\n"
		"	I1         1  1    Modified Bessel function of A (1st kind, order 1)\n"
		"	IFELSE     3  1    B if A != 0, else C\n"
		"	IN         2  1    Modified Bessel function of A (1st kind, order B)\n"
		"	INRANGE    3  1    1 if B <= A <= C, else 0\n"
		"	INSIDE     1  1    1 when inside or on polygon(s) in A, else 0\n"
		"	INV        1  1    1 / A\n"
		"	ISFINITE   1  1    1 if A is finite, else 0\n"
		"	ISNAN      1  1    1 if A == NaN, else 0\n"
		"	J0         1  1    Bessel function of A (1st kind, order 0)\n"
		"	J1         1  1    Bessel function of A (1st kind, order 1)\n"
		"	JN         2  1    Bessel function of A (1st kind, order B)\n"
		"	K0         1  1    Modified Kelvin function of A (2nd kind, order 0)\n"
		"	K1         1  1    Modified Bessel function of A (2nd kind, order 1)\n"
		"	KEI        1  1    kei (A)\n"
		"	KER        1  1    ker (A)\n"
		"	KM2DEG     1  1    Converts Kilometers to Spherical Degrees\n"
		"	KN         2  1    Modified Bessel function of A (2nd kind, order B)\n"
		"	KURT       1  1    Kurtosis of A\n"
		"	LCDF       1  1    Laplace cumulative distribution function for z = A\n"
		"	LCRIT      1  1    Laplace distribution critical value for alpha = A\n"
		"	LDIST      1  1    Compute minimum distance (in km if -fg) from lines in multi-segment ASCII file A\n"
		"	LDISTG     0  1    As LDIST, but operates on the GSHHG dataset (see -A, -D for options)\n"
		"	LDIST2     2  1    As LDIST, from lines in ASCII file B but only to nodes where A != 0\n"
		"	LE         2  1    1 if A <= B, else 0\n"
		"	LOG        1  1    log (A) (natural log)\n"
		"	LOG10      1  1    log10 (A) (base 10)\n"
		"	LOG1P      1  1    log (1+A) (accurate for small A)\n"
		"	LOG2       1  1    log2 (A) (base 2)\n"
		"	LMSSCL     1  1    LMS scale estimate (LMS STD) of A\n"
		"	LMSSCLW    1  1    Weighted LMS scale estimate (LMS STD) of A for weights in B\n"
		"	LOWER      1  1    The lowest (minimum) value of A\n"
		"	LPDF       1  1    Laplace probability density function for z = A\n"
		"	LRAND      2  1    Laplace random noise with mean A and std. deviation B\n"
		"	LT         2  1    1 if A < B, else 0\n"
		"	MAD        1  1    Median Absolute Deviation (L1 STD) of A\n"
		"	MADW       2  1    Weighted Median Absolute Deviation (L1 STD) of A for weights in B\n"
		"	MAX        2  1    Maximum of A and B\n"
		"	MEAN       1  1    Mean value of A\n"
		"	MEANW      2  1    Weighted mean value of A for weights in B\n"
		"	MEDIAN     1  1    Median value of A\n"
		"	MEDIANW    2  1    Weighted median value of A for weights in B\n"
		"	MIN        2  1    Minimum of A and B\n"
		"	MOD        2  1    A mod B (remainder after floored division)\n"
		"	MODE       1  1    Mode value (Least Median of Squares) of A\n"
		"	MODEW      2  1    Weighted mode value of A for weights in B\n"
		"	MUL        2  1    A * B\n"
		"	NAN        2  1    NaN if A == B, else A\n"
		"	NEG        1  1    -A\n"
		"	NEQ        2  1    1 if A != B, else 0\n"
		"	NORM       1  1    Normalize (A) so max(A)-min(A) = 1\n"
		"	NOT        1  1    NaN if A == NaN, 1 if A == 0, else 0\n"
		"	NRAND      2  1    Normal, random values with mean A and std. deviation B\n"
		"	OR         2  1    NaN if B == NaN, else A\n"
		"	PDIST      1  1    Compute minimum distance (in km if -fg) from points in ASCII file A\n"
		"	PDIST2     2  1    As PDIST, from points in ASCII file B but only to nodes where A != 0\n"
		"	PERM       2  1    Permutations n_P_r, with n = A and r = B\n"
		"	POP        1  0    Delete top element from the stack\n"
		"	PLM        3  1    Associated Legendre polynomial P(A) degree B order C\n"
		"	PLMg       3  1    Normalized associated Legendre polynomial P(A) degree B order C (geophysical convention)\n"
		"	POINT      1  2    Return mean_x mean_y of points in ASCII file A\n"
		"	POW        2  1    A ^ B\n"
		"	PQUANT     2  1    The B'th Quantile (0-100%) of A\n"
		"	PQUANTW    3  1    The C'th Quantile (0-100%) of A for weights in B\n"
		"	PSI        1  1    Psi (or Digamma) of A\n"
		"	PV         3  1    Legendre function Pv(A) of degree v = real(B) + imag(C)\n"
		"	QV         3  1    Legendre function Qv(A) of degree v = real(B) + imag(C)\n"
		"	R2         2  1    R2 = A^2 + B^2\n"
		"	R2D        1  1    Convert Radians to Degrees\n"
		"	RAND       2  1    Uniform random values between A and B\n"
		"	RCDF       1  1    Rayleigh cumulative distribution function for z = A\n"
		"	RCRIT      1  1    Rayleigh distribution critical value for alpha = A\n"
		"	RINT       1  1    rint (A) (round to integral value nearest to A)\n"
		"	RMS        1  1    Root-mean-square of A\n"
		"	RMSW       2  1    Weighted Root-mean-square of A for weights in B\n"
		"	RPDF       1  1    Rayleigh probability density function for z = A\n"
		"	ROLL       2  0    Cyclicly shifts the top A stack items by an amount B\n"
		"	ROTX       2  1    Rotate A by the (constant) shift B in x-direction\n"
		"	ROTY       2  1    Rotate A by the (constant) shift B in y-direction\n"
		"	SDIST      2  1    Spherical distance (in km) between grid nodes and stack lon,lat (A, B)\n"
		"	SDIST2     2  1    As SDIST but only to nodes that are != 0\n"
		"	SAZ        2  1    Spherical azimuth from grid nodes to stack x,y\n"
		"	SBAZ       2  1    Spherical back-azimuth from grid nodes to stack x,y\n"
		"	SEC        1  1    sec (A) (A in radians)\n"
		"	SECD       1  1    sec (A) (A in degrees)\n"
		"	SECH       1  1    sech (A)\n"
		"	SIGN       1  1    sign (+1 or -1) of A\n"
		"	SIN        1  1    sin (A) (A in radians)\n"
		"	SINC       1  1    sinc (A) (sin (pi*A)/(pi*A))\n"
		"	SIND       1  1    sin (A) (A in degrees)\n"
		"	SINH       1  1    sinh (A)\n"
		"	SKEW       1  1    Skewness of A\n"
		"	SQR        1  1    A^2\n"
		"	SQRT       1  1    sqrt (A)\n"
		"	STD        1  1    Standard deviation of A\n"
		"	STDW       2  1    Weighted standard deviation of A for weights in B\n"
		"	STEP       1  1    Heaviside step function: H(A)\n"
		"	STEPX      1  1    Heaviside step function in x: H(x-A)\n"
		"	STEPY      1  1    Heaviside step function in y: H(y-A)\n"
		"	SUB        2  1    A - B\n"
		"	SUM        1  1    Sum of all values in A\n"
		"	TAN        1  1    tan (A) (A in radians)\n"
		"	TAND       1  1    tan (A) (A in degrees)\n"
		"	TANH       1  1    tanh (A)\n"
		"	TAPER      2  1    Unit weights cosine-tapered to zero within A and B of x and y grid margins\n"
		"	TN         2  1    Chebyshev polynomial Tn(-1<t<+1,n), with t = A, and n = B\n"
		"	TCRIT      2  1    Student's t-distribution critical value for alpha = A and nu = B\n"
		"	TCDF       2  1    Student's t cumulative distribution function for t = A, and nu = B\n"
		"	TPDF       2  1    Student's t probability density function for t = A and nu = B\n"
		"	TRIM       3  1    Alpha-trimming for %%-left = A, %%-right = B, and grid = C\n"
		"	UPPER      1  1    The highest (maximum) value of A\n"
		"	VAR        1  1    Variance of A\n"
		"	VARW       2  1    Weighted variance of A for weights in B\n"
		"	WCDF       3  1    Weibull cumulative distribution function for x = A, scale = B, and shape = C\n"
		"	WCRIT      3  1    Weibull distribution critical value for alpha = A, scale = B, and shape = C\n"
		"	WPDF       3  1    Weibull probability density function for x = A, scale = B and shape = C\n"
		"	WRAP       1  1    wrap (A). (A in radians)\n"
		"	XOR        2  1    0 if A == NaN and B == NaN, NaN if B == NaN, else A\n"
		"	Y0         1  1    Bessel function of A (2nd kind, order 0)\n"
		"	Y1         1  1    Bessel function of A (2nd kind, order 1)\n"
		"	YLM        2  2    Re and Im orthonormalized spherical harmonics degree A order B\n"
		"	YLMg       2  2    Cos and Sin normalized spherical harmonics degree A order B (geophysical convention)\n"
		"	YN         2  1    Bessel function of A (2nd kind, order B)\n"
		"	ZCRIT      1  1    Normal distribution critical value for alpha = A\n"
		"	ZCDF       1  1    Normal cumulative distribution function for z = A\n"
		"	ZPDF       1  1    Normal probability density function for z = A\n"
	);

/* vim: set ft=c: */