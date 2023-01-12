//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AppendBuffer {
    CDUnknownFunctionPointerType *_vptr$AppendBuffer;
    struct StreamBuffer stream;
};

struct BinaryBuffer {
    CDUnknownFunctionPointerType *_vptr$AppendBuffer;
    struct StreamBuffer stream;
    struct mach_timebase_info _timebase;
};

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct Key {
    CDStruct_41a22ec7 hash;
    NSData *data;
};

struct KeyBufferPair {
    struct Key key;
    id buffer;
};

struct MTLRenderPassAttachmentDescriptorPrivate {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    CDStruct_d2b197d1 _field8;
    double _field9;
    unsigned int _field10;
    unsigned long long _field11;
    id _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    _Bool _field19;
};

struct MTLResourceID {
    unsigned long long _field1;
};

struct MTLTargetDeviceArch {
    unsigned long long _field1;
    unsigned int _field2;
    char *_field3;
};

struct StreamBuffer {
    char *bytes;
    char *pWrite;
    char *pEnd;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct optional<unsigned long> {
    union {
        char _field1;
        unsigned long long _field2;
    } _field1;
    _Bool _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct vector<id, std::allocator<id>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<id *, std::allocator<id>> {
        id *__value_;
    } __end_cap_;
};

struct vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<NSData *, unsigned long>*, std::allocator<std::pair<NSData *, unsigned long>>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    float _field27;
    float _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned long long _field64;
} CDStruct_e1c34685;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1[2];
} CDStruct_492b6082;

typedef struct {
    unsigned char key[32];
} CDStruct_41a22ec7;

typedef struct {
    unsigned int _field1[3];
} CDStruct_22c8f40a;

typedef struct {
    unsigned int :8;
    unsigned int :24;
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_4af8c268;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct optional<unsigned long> {
    union {
        char _field1;
        unsigned long long _field2;
    } _field1;
    _Bool _field2;
} optional_b0be1e53;

#pragma mark Typedef'd Unions

typedef union {
    CDStruct_4af8c268 _field1;
    CDStruct_4af8c268 _field2;
} CDUnion_c6e49ed4;

