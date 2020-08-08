// utf8.t.cpp test utf8.h
#include <cassert>
#include "../xll/utf8.h"

int test_utf8 = []() {
	char s[] = "abc";
	auto ws = Utf8ToWcs(s);
	assert(3 == ws.length());
	assert(0 == wcsncmp(ws.data(), L"abc", 3));

	return 0;
}();