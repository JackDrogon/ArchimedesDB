#pragma once

#include <cstdint>

namespace archimedesdb {

class Bucket;

struct Meta {
	int32_t magic;
	int32_t version;
	int map_size;
	Bucket *free;
	Bucket *main;
	int last_page_number;
	int transaction_id;
};

} // archimedesdb
