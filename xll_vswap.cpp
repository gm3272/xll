// vswap.cpp
#include "fre_vswap.h"
#include "xll_fre.h"

using namespace xll;

//!!! implement vswap::variance
AddIn xai_vswap(
	Function(XLL_DOUBLE, "xll_vswap", "XLL.VSWAP")
	.Arguments({
		Arg(XLL_DOUBLE, "f", "is the f(x)."),
		Arg(XLL_DOUBLE, "n", "is the size of time."),
		Arg(XLL_DOUBLE, "k", "is the strike price."),
		Arg(XLL_DOUBLE, "p", "is the put value."),
		Arg(XLL_DOUBLE, "c", "is the call value."),
		})
	.Category(CATEGORY)
	.FunctionHelp("Return par variance")
	//...
);
double WINAPI xll_vswap(double f, size_t n, const double* k, const double* p, double* c)
{
#pragma XLLEXPORT
	ensure(size(*k) == n && size(*p) == n && size(*c) == n);

	return fre::vswap::variance(f, n, k, p, c);
}