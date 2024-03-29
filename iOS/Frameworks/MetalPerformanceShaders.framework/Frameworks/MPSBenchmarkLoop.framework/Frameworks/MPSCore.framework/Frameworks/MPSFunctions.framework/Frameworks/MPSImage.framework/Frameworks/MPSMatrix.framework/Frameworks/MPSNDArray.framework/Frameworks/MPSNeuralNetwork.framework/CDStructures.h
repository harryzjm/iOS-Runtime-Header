//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

#pragma mark Named Structures

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSImageCoordinate {
    unsigned long long x;
    unsigned long long y;
    unsigned long long channel;
};

struct MPSKernelInfo;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    CDUnknownFunctionPointerType _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
    struct MPSDeviceSpecificInfo _field16;
    struct MPSDeviceSpecificInfo _field17;
    struct MPSDeviceSpecificInfo _field18;
    struct MPSDeviceSpecificInfo _field19;
    struct MPSDeviceSpecificInfo _field20;
    struct MPSDeviceSpecificInfo _field21;
    struct MPSDeviceSpecificInfo _field22;
    struct MPSDeviceSpecificInfo _field23;
    struct MPSDeviceSpecificInfo _field24;
    struct MPSDeviceSpecificInfo _field25;
    struct MPSDeviceSpecificInfo _field26;
    struct MPSDeviceSpecificInfo _field27;
    struct MPSDeviceSpecificInfo _field28;
    struct MPSDeviceSpecificInfo _field29;
    struct MPSDeviceSpecificInfo _field30;
    struct MPSDeviceSpecificInfo _field31;
    struct MPSDeviceSpecificInfo _field32;
    struct MPSDeviceSpecificInfo _field33;
    struct MPSDeviceSpecificInfo _field34;
    struct MPSDeviceSpecificInfo _field35;
    struct MPSDeviceSpecificInfo _field36;
    struct MPSDeviceSpecificInfo _field37;
    struct MPSDeviceSpecificInfo _field38;
    struct MPSDeviceSpecificInfo _field39;
    struct MPSDeviceSpecificInfo _field40;
    struct MPSDeviceSpecificInfo _field41;
    struct MPSDeviceSpecificInfo _field42;
    struct MPSDeviceSpecificInfo _field43;
    struct MPSDeviceSpecificInfo _field44;
    struct MPSDeviceSpecificInfo _field45;
};

struct MPSNNDimensionOrder {
    unsigned long long dimensions[4];
};

struct MPSSliceInfo {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct NeuronInfo {
    int type;
    float a;
    float b;
    float c;
    NSData *aData;
};

struct atomic<long> {
    struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> {
        _Atomic long long __a_value;
    } __a_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    CDStruct_2ec95fd7 _field3;
    CDStruct_2ec95fd7 _field4;
    unsigned long long _field5;
    unsigned long long _field6;
} CDStruct_37840a1a;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct {
        CDStruct_da2e99ad _field1;
        CDStruct_da2e99ad _field2;
    } _field4;
    unsigned long long _field5;
} CDStruct_1cd378eb;

