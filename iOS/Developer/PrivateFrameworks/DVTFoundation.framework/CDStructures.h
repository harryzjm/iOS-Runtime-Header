//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct mach_header_64 {
    unsigned int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;
