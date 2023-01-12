//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArrayBuilder {
    id _field1[62];
    id *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

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

struct DVTBitSet {
    unsigned long long _field1;
    unsigned long long _field2[0];
};

struct DVTMacroNameLookupCursor {
    id _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
    struct DVTMacroValueAssignment *_field5;
    id _field6;
};

struct DVTMacroValueAssignment;

struct DVTMacroValueAssignmentMapTable {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    void *_field6;
};

struct DVTNestedMacroExpansionState {
    id _field1;
    unsigned int _field2;
    struct DVTMacroNameLookupCursor _field3;
    id _field4;
    struct DVTNestedMacroExpansionState *_field5;
};

struct DVTStringBuilder {
    unsigned short _field1[512];
    unsigned short *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct DVTUnfairLock {
    struct os_unfair_lock_s __lock;
};

struct UParseError {
    int _field1;
    int _field2;
    unsigned short _field3[16];
    unsigned short _field4[16];
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

struct fastsimplearray {
    unsigned long long _field1;
    unsigned long long _field2;
    void **_field3;
};

struct fsid {
    int _field1[2];
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

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16;
    unsigned int _field17[7];
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<DVTFuture *, long, (anonymous namespace)::objc_pointer_hasher, std::equal_to<DVTFuture *>, std::allocator<std::pair<DVTFuture *const, long>>> {
    struct __hash_table<std::__hash_value_type<DVTFuture *, long>, std::__unordered_map_hasher<DVTFuture *, std::__hash_value_type<DVTFuture *, long>, (anonymous namespace)::objc_pointer_hasher, std::equal_to<DVTFuture *>, true>, std::__unordered_map_equal<DVTFuture *, std::__hash_value_type<DVTFuture *, long>, std::equal_to<DVTFuture *>, (anonymous namespace)::objc_pointer_hasher, true>, std::allocator<std::__hash_value_type<DVTFuture *, long>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<DVTFuture *, long>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<DVTFuture *, std::__hash_value_type<DVTFuture *, long>, (anonymous namespace)::objc_pointer_hasher, std::equal_to<DVTFuture *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<DVTFuture *, std::__hash_value_type<DVTFuture *, long>, std::equal_to<DVTFuture *>, (anonymous namespace)::objc_pointer_hasher, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<void (^)(DVTFutureState, id, NSError *), std::allocator<void (^)(DVTFutureState, id, NSError *)>> {
    CDUnknownBlockType *__begin_;
    CDUnknownBlockType *__end_;
    struct __compressed_pair<void (^__strong *)(DVTFutureState, id, NSError *), std::allocator<void (^)(DVTFutureState, id, NSError *)>> {
        CDUnknownBlockType *__value_;
    } __end_cap_;
};

struct vector<void (^)(long, bool *), std::allocator<void (^)(long, bool *)>> {
    CDUnknownBlockType *__begin_;
    CDUnknownBlockType *__end_;
    struct __compressed_pair<void (^__strong *)(long, bool *), std::allocator<void (^)(long, bool *)>> {
        CDUnknownBlockType *__value_;
    } __end_cap_;
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

