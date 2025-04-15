
#ifdef _WIN32 // for x86

// from qt source <qstring.h>

struct QArrayData
{
	int ref;
	int size;
	__int32 alloc : 31;
	__int32 capacityReserved : 1;
	int offset;
};

struct QByteArray
{
	QArrayData *d;
};

struct QString
{
	kso_qt::QArrayData *Data;
	wchar_t *raw;
};

#endif
