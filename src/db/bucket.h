#pragma once

namespace archimedesdb {

class Bucket {
private:
	int pad_;
	int flags_;
	int depth_;
	int branch_page_count_;
	int leaf_page_count_;
	int overflow_page_count_;
	int entry_count_;
	int root_id_;
};

} // archimedesdb
