
#ifndef TecKitJni_h
#define TecKitJni_h
#include "TECkit_Engine.h"


class TecKitJni
{
public:
    TecKitJni();
    ~TecKitJni() ;
    bool openMapping(const char * fileName, bool toUnicode); 
    bool openMapping(const char* fileName, bool toUnicode, UInt16 sourceForm, UInt16 targetForm);
    char * convert(const char * input);
    char * convert(const char* input, UInt32 inLength);
    void flush();
    Byte * getOutputBuffer() { return outputBuffer;};
    UInt32 getOutputLength() { return outputLength;};
private:
    TECkit_Converter converter;
    bool toUnicode;
    Byte * mapBuffer;
    Byte * outputBuffer;
    UInt32 outputLength;
    UInt32 maxOutputLength;
    char * inputBuffer;
    UInt32 maxInputLength;
};

#endif
