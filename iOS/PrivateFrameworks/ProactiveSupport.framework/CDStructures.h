//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BuddyAllocator;

struct _PASDeviceStateSystemCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct _PASTuple2 {
    Class _field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct unique_ptr<(anonymous namespace)::BuddyAllocator, std::__1::default_delete<(anonymous namespace)::BuddyAllocator>> {
    struct __compressed_pair<(anonymous namespace)::BuddyAllocator *, std::__1::default_delete<(anonymous namespace)::BuddyAllocator>> {
        struct BuddyAllocator *__first_;
    } __ptr_;
};

