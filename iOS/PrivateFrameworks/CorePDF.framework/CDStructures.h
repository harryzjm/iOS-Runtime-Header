//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColor;

struct CGColorSpace;

struct CGImage;

struct CGPDFContentStream;

struct CGPDFDictionary;

struct CGPDFObject;

struct CGPDFStream;

struct CGPath;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CPInlineContainer {
    unsigned int _field1;
    id _field2;
    struct CPInlineContainer *_field3;
};

struct CPListInfo {
    unsigned int _field1;
    unsigned int _field2;
    struct CGRect _field3;
    struct __CFString *_field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    void *_field12;
};

struct CPMultiUnicodes;

struct CPPDFChar {
    struct CPPDFObject _field1;
    unsigned short _field2;
    unsigned short _field3;
    struct CGPoint _field4;
    struct CGSize _field5;
    struct CPPDFStyle *_field6;
    double _field7;
    int _field8;
};

struct CPPDFClipBuffer {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct CPPDFClipSequence *_field4;
};

struct CPPDFClipSequence;

struct CPPDFContext {
    struct CGRect _field1;
    unsigned int _field2;
    struct CPPDFGraphicState *_field3;
    struct CPPDFGraphicState *_field4;
    struct CGPDFContentStream *_field5[250];
    unsigned int _field6;
    struct PrimitiveBuffer _field7;
    struct PrimitiveBuffer _field8;
    struct PrimitiveBuffer _field9;
    struct CPPDFClipBuffer _field10;
    struct __CFDictionary *_field11;
    struct __CFDictionary *_field12;
    struct __CFDictionary *_field13;
    struct CPPDFStyle *_field14;
    int *_field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    struct CPMultiUnicodes *_field20;
    long long _field21;
    long long _field22;
    unsigned int *_field23;
    struct CGPath **_field24;
    _Bool _field25;
};

struct CPPDFGraphicState;

struct CPPDFImage {
    struct CPPDFObject _field1;
    unsigned int _field2;
    struct CGPDFStream *_field3;
    int _field4;
    struct CGImage *_field5;
    struct CGAffineTransform _field6;
    struct CGPDFDictionary *_field7;
    double _field8;
    struct CGColor *_field9;
};

struct CPPDFObject {
    struct CGRect _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CPPDFShape {
    struct CPPDFObject _field1;
    unsigned int _field2;
    struct CPPDFStyle *_field3;
    int _field4;
    struct CGPath *_field5;
    _Bool _field6;
    struct CGAffineTransform _field7;
    struct CGAffineTransform _field8;
};

struct CPPDFStyle {
    struct CGColor *_field1;
    struct CGColorSpace *_field2;
    struct CGColor *_field3;
    struct CGColorSpace *_field4;
    double _field5;
    double _field6;
    unsigned char _field7;
    unsigned char _field8;
    int _field9;
    double _field10;
    id _field11;
    double _field12;
    struct CGPDFObject *_field13;
    struct CGPDFObject *_field14;
    struct CGColor *_field15;
    struct CPPDFStyle *_field16;
};

struct PrimitiveBuffer {
    void *_field1;
    void *_field2;
    void *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFDictionary;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_2a61e2ef;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    unsigned int _field2;
    double _field3;
    double _field4;
    unsigned int _field5;
    double _field6;
    double _field7;
    _Bool _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    _Bool _field20;
} CDStruct_1ec70fb1;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct CDStruct_183601bc;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    int _field5;
    int *_field6;
    struct CPPDFStyle *_field7;
} CDStruct_8db92b66;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
} CDStruct_f9662865;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    struct CGRect _field5;
} CDStruct_2e2afed4;

typedef struct {
    double fontStretch;
    double fontWeight;
    unsigned int flags;
    struct CGRect fontBBox;
    double italicAngle;
    double ascent;
    double descent;
    double leading;
    double capHeight;
    double xHeight;
    double stemV;
    double stemH;
    double avgWidth;
    double maxWidth;
    double missingWidth;
    double spaceWidth;
    double underlinePosition;
    double underlineThickness;
} CDStruct_05724ab2;

