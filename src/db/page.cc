#include "page.h"

namespace archimedesdb {

std::string Page::Type()
{
	switch (flags_ &
		(kBranchPage | kLeafPage | kMetaPage | kFreelistPage)) {
	case kBranchPage:
		return "Branch Page";
	case kLeafPage:
		return "Leaf Page";
	case kMetaPage:
		return "Meta Page";
	case kFreelistPage:
		return "Freelist Page";
	default:
		return "Unknown Page";
	}
}

} // archimedesdb
