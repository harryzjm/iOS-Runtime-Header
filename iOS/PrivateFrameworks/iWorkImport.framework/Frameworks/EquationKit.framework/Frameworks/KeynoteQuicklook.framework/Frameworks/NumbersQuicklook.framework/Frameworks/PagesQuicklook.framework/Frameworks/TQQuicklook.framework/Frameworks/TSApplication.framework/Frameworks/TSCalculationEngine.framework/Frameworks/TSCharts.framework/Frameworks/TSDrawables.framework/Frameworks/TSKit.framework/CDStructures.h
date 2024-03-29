//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AbstractOperation;

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

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

struct InternalMetadata {
    void *_field1;
};

struct Message {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadata _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<TSKCO::AbstractOperation> {
    struct AbstractOperation *_field1;
    struct __shared_weak_count *_field2;
};

struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<TSU::UUIDData<TSP::UUIDData>*, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int useCount;
    id ticket;
} CDStruct_2a021fcd;

typedef struct {
    unsigned short id;
    _Bool firstOneWin;
    _Bool hasDescendantProperties;
    unsigned short path[6];
} CDStruct_1464e8ba;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct shared_ptr<TSKCO::AbstractOperation> {
    struct AbstractOperation *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_f167ad79;

