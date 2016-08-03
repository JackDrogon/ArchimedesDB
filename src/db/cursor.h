#pragma once

namespace archimedesdb {

class Transaction;
class XCursor;
class Bucket;
class BucketX;
class Page;

class Cursor {
private:
	int           flags_;
	Cursor        *next_;
	Cursor        *backup_;
	XCursor       *xcursor;
	Transaction   *transaction;
	int           bucket_id_;
	Bucket        *bucket_;
	BucketX       *bucketx_;
	int           bucket_flag_;
	int           snum_;
	int           top_;
	Page          **page;
	int           *ki_;     // < stack of page indices
};

} // namespace
