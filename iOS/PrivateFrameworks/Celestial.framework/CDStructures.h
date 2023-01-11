//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVControllerPrivate {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    Class _field6;
    id _field7;
    long long _field8;
    long long _field9;
    float _field10;
    float _field11;
    long long _field12;
    _Bool _field13;
    id _field14;
    float _field15;
    struct __CFString *_field16;
    id _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    id _field21;
    struct OpaqueFigVisualContext *_field22;
    id _field23;
    struct __CFRunLoop *_field24;
    unsigned long long _field25;
    int _field26;
    int _field27;
    int _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    id _field33;
    struct OpaqueFigPlayer *_field34;
    id _field35;
    id _field36;
    id _field37;
    _Bool _field38;
    _Bool _field39;
    id _field40;
    id _field41;
    _Bool _field42;
    _Bool _field43;
    _Bool _field44;
    int _field45;
    _Bool _field46;
};

struct AVFileValidatorPrivate {
    id _field1;
    id _field2;
    struct FigOpaqueMediaValidator *_field3;
    struct FigMediaValidatorDataLocation _field4;
    struct OpaqueCMByteStream *_field5;
    _Bool _field6;
    _Bool _field7;
    id _field8;
};

struct AVItemPrivate {
    id _field1;
    id _field2;
    double _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned long long _field7;
    _Bool _field8;
    _Bool _field9;
    id _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    _Bool _field14;
    id _field15;
    id _field16;
    _Bool _field17;
    _Bool _field18;
    id _field19;
    id _field20;
    struct OpaqueFigThread *_field21;
    struct OpaqueCMByteStream *_field22;
    int _field23;
    id _field24;
    id _field25;
};

struct AVSystemControllerPrivate {
    _Bool _field1;
    _Bool _field2;
    float _field3;
    id _field4;
    struct OpaqueFigPlayer *_field5;
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

struct FigMediaValidatorDataLocation {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct FigOpaqueMediaValidator;

struct OpaqueCMByteStream;

struct OpaqueFigPlayer;

struct OpaqueFigThread;

struct OpaqueFigVisualContext;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    int width;
    int height;
} CDStruct_79c71658;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

