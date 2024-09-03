
#ifdef _WIN32 // for x86

struct QArrayData
{
    int ref;
    int size;
    int alloc : 31;
    int capacityReserved : 1;

    int offset; // in bytes from beginning of header
	// data
};

struct QString
{
	QArrayData* Data;
};

#endif