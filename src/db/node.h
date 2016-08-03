#pragma once

namespace archimedesdb {

class Node {
private:
	int low_;
	int high_;
	int flags_;
	int key_size_;
	char *data_;
};

} // archimedesdb
