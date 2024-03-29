//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CacheFrame {
    struct CacheFrame *_field1;
    struct ResourceNode *_field2;
    struct HeapNodeBlock *_field3;
};

struct HeapNodeBlock;

struct MPSAutoCache {
    id _field1;
    id _field2;
    struct CacheFrame *_field3;
};

struct MTLResourceID {
    unsigned long long _field1;
};

struct ResourceNode {
    struct ResourceNode *_field1;
    id _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic<long> {
    struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> {
        _Atomic long long __a_value;
    } __a_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

