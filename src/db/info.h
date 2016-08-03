#pragma once

namespace archimedesdb {

struct Info {
	int max_size;
	int last_page_id;
	int last_transaction_id;
	int max_readers;
	int reader_count;
};

} // archimedesdb
