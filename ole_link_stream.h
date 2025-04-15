typedef struct _ansiString
{
  uint32_t ansiLength;
  uint8_t anisString[0];
}AnsiString;

typedef struct _unicodeString
{
  uint32_t cbUnicodeStringSize;
  uint32_t cbUnicodeStringBytes;
  uint16_t usKeyValue;
  uint8_t unicodeString[0];
}UnicodeString;

typedef struct _monikerStream
{
  uint16_t clsid[16];
  uint8_t monikerStreamData[0];
}MonikerStream;

typedef struct _oleMonikerStream
{
  uint32_t monikerStreamSize;
  uint8_t monikerStreamData;
}OleMonikerStream;

typedef struct _compositeMoniker
{
    uint32_t cMoniker;
    _monikerStream _monikerStreamArray[0];
}MonikerStream;

typedef struct _fileMoniker
{
  uint16_t cAnti;
  AnsiString ansiPath;
  uint16_t endServer;
  uint16_t versionNumber;
  uint8_t reserved_1[16];
  uint8_t reserved_2[4];
  UnicodeString unicodePath;
}FileMoniker;

typedef struct _absoluteMoniker
{
    uint16_t clsid[16];
    CompositeMoniker compositeMoniker; 
}AbsoluteMoniker;


struct oleLinkStream
{
  uint32_t version;                 //0x00
  uint32_t flags;                   //0x04
  uint32_t linkUpdateOption;        //0x08
  uint32_t reserved_1;              //0x0C
  nullptr_t reservedMonikerStreamSize;    //0x10
  nullptr_t relativeMonikerStreamSize;  //0x14  ---  nullptr
  uint32_t absoluteMonikerStreamSize;
  AbsoluteMoniker absoluteMonikerStream;
};
