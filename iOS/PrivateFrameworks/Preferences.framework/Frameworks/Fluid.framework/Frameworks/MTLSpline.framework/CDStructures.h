//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Named Structures

struct AxisAngle {
    float _field1;
};

struct ControlPoint {
    float _field1;
};

struct InstanceInfo {
    CDStruct_14d5dc5e _field1;
};

struct PatchInfo;

struct vector<ControlPoint, std::__1::allocator<ControlPoint>> {
    struct ControlPoint *__begin_;
    struct ControlPoint *__end_;
    struct __compressed_pair<ControlPoint *, std::__1::allocator<ControlPoint>> {
        struct ControlPoint *__value_;
    } __end_cap_;
};

struct vector<InstanceInfo, std::__1::allocator<InstanceInfo>> {
    struct InstanceInfo *__begin_;
    struct InstanceInfo *__end_;
    struct __compressed_pair<InstanceInfo *, std::__1::allocator<InstanceInfo>> {
        struct InstanceInfo *__value_;
    } __end_cap_;
};

struct vector<PatchInfo, std::__1::allocator<PatchInfo>> {
    struct PatchInfo *__begin_;
    struct PatchInfo *__end_;
    struct __compressed_pair<PatchInfo *, std::__1::allocator<PatchInfo>> {
        struct PatchInfo *__value_;
    } __end_cap_;
};

struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
        void *__value_;
    } __end_cap_;
};

struct vector<simd_float4x4, std::__1::allocator<simd_float4x4>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<simd_float4x4 *, std::__1::allocator<simd_float4x4>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct CDStruct_183601bc;

