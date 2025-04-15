/* size = 24U */
typedef struct _stl_string
{
#ifdef _DEBUG
  int allocator;
#endif // DEBUG
  union text
  {
    char* lpstr;
    char str[16];
  }text;

  int size;
  int capacity;
}_stl_string;

/* size = 24U */
typedef struct _stl_wstring
{
#ifdef _DEBUG
  int allocator;
#endif // DEBUG
  union text
  {
    wchar_t* lpstr;
    wchar_t str[8];
  }text;

  int size;
  int capacity;
}_stl_wstring;