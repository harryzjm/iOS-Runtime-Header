//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _colordef {
    unsigned int _field1;
    unsigned int _field2;
    struct _rgbquad {
        unsigned int :8;
        unsigned int :8;
        unsigned int :8;
        unsigned int :8;
    } _field3;
};

struct _csibitmap {
    unsigned int _field1;
    union {
        unsigned int _field1;
        struct _csibitmapflags {
            unsigned int :1;
            unsigned int :1;
            unsigned int :30;
        } _field2;
    } _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[0];
};

struct _csicolor {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int :8;
    unsigned int :3;
    unsigned int :21;
    unsigned int _field3;
    double _field4[0];
};

struct _csiheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int :4;
    unsigned int :28;
    struct _csimetadata {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        char _field4[128];
    } _field8;
    unsigned int _field9;
    struct _csibitmaplist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field10;
};

struct _csitextstyle {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    unsigned int _field8;
    char _field9[0];
};

struct _renditionkeyfmt {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[0];
};

struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} CDStruct_3c058996;

typedef struct {
    long long _field1;
    char *_field2;
    char *_field3;
} CDStruct_c77fb927;

typedef struct {
    char *_field1;
    char *_field2;
    struct _renditionkeytoken _field3[5];
    long long _field4;
    long long _field5;
    struct {
        char *_field1;
        char *_field2;
        long long _field3;
        unsigned long long _field4;
    } _field6[12];
} CDStruct_26b2aa83;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGPoint _field9;
} CDStruct_ca46f23f;

typedef struct {
    char *_field1;
    char *_field2;
    _Bool _field3;
    long long _field4;
    CDStruct_26b2aa83 _field5[8];
} CDStruct_22c2ae3f;

