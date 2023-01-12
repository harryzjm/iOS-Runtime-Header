//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSIndexSet, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct InodeDevPair {
    int dev;
    unsigned long long inode;
};

struct NSSlice {
    void **items;
    struct NSSliceExternalAcquisitionProperties *acquisitionProps;
    struct NSSliceExternalPersonalityProperties *personalityProps;
    struct NSSliceInternalProperties *internalProps;
};

struct NSSliceExternalAcquisitionProperties;

struct NSSliceExternalPersonalityProperties;

struct NSSliceInternalProperties;

struct _NSOrderedChange;

struct _NSProgressFraction {
    long long completed;
    long long total;
    _Bool overflowed;
};

struct _NSProgressFractionTuple {
    struct _NSProgressFraction _field1;
    struct _NSProgressFraction _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSSimpleAttributeDictionaryElement {
    unsigned long long hash;
    id key;
    id value;
};

struct __CFDictionary;

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct edge {
    unsigned long long _field1;
    unsigned long long _field2[2];
    unsigned long long _field3;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s _field1;
    unsigned int _field2;
};

struct sockaddr;

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

struct vertex {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    long long _field5;
    id _field6;
    id _field7;
    id _field8;
} CDStruct_4f05a0fa;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    id _field1;
    void *_field2;
    long long _field3;
} CDStruct_4829dca9;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6;
} CDStruct_6243051c;

typedef struct {
    unsigned long long kind;
    NSObject *oldValue;
    NSObject *newValue;
    NSIndexSet *indexes;
    id extraData;
} CDStruct_e173081d;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long offset;
    int type;
} CDStruct_1b1be194;

typedef struct {
    unsigned char _unused[5];
    unsigned char _sortVersion;
    unsigned char _offsetIntSize;
    unsigned char _objectRefSize;
    unsigned long long _numObjects;
    unsigned long long _topObject;
    unsigned long long _offsetTableOffset;
} CDStruct_f10e9336;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned int :8;
    unsigned int :4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :18;
    unsigned short _field1[8];
} CDStruct_5fe7aead;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    _Bool extensionHidden;
    NSDate *creationDate;
    struct _fields {
        unsigned int extensionHidden:1;
        unsigned int creationDate:1;
        unsigned int reserved:30;
    } validFields;
} CDStruct_1b190c06;

typedef struct {
    id objects;
    _Bool isMutable;
    struct {
        struct _NSOrderedChange *buffer;
        unsigned long long availableIndex;
        unsigned long long capacity;
        unsigned long long changesIndex;
        unsigned long long lastIndex;
        unsigned long long count;
    } list;
} CDStruct_29daef6c;

