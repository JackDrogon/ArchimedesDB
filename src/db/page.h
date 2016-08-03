#pragma once

#include <string>

namespace archimedesdb {

class Page {
private:
	std::string Type();

public:

private:
	int flags_;

	enum {
		kBranchPage   = 0x01,
		kLeafPage     = 0x01 << 1,
		kMetaPage     = 0x01 << 2,
		kFreelistPage = 0x10 << 3
	};
};

} // archimedesdb
