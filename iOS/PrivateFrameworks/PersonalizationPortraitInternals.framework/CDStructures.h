//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct NSDictionary {
    Class _field1;
};

struct PPMBoolOption_ {
    unsigned long long _field1;
};

struct PPMNamedEntityAlgorithm_ {
    unsigned long long _field1;
};

struct PPMNamedEntityDonationSource_ {
    unsigned long long _field1;
};

struct PPMPortraitComponent_ {
    unsigned long long _field1;
};

struct PPMPortraitDomain_ {
    unsigned long long _field1;
};

struct PPMPortraitFeedbackType_ {
    unsigned long long _field1;
};

struct PPMTopicDonationErrorReason_ {
    unsigned long long _field1;
};

struct PPMTopicDonationSource_ {
    unsigned long long _field1;
};

struct PPMTypeSafeBool_ {
    unsigned long long _field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct __DDQueryOffset {
    unsigned int :32;
    unsigned int :32;
};

struct __DDResult {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    CDStruct_912cb5d2 _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    long long _field10;
    unsigned char _field11;
    float _field12;
};

struct header_s {
    unsigned int qidCount;
    unsigned int topicCount;
    unsigned int nonzeroCount;
    unsigned int payloadLen;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

