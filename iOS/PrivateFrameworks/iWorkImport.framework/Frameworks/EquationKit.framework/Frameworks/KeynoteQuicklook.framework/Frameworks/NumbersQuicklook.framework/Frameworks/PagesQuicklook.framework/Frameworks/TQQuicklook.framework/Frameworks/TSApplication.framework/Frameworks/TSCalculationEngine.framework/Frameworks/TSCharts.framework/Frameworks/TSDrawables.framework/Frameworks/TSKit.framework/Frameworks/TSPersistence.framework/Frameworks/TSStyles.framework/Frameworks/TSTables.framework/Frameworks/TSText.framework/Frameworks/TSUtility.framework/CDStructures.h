//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID, TSUCustomFormat;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct TSUIndexRange {
    long long _begin;
    long long _end;
};

struct TSUIndexRangeStruct {
    long long _field1;
    long long _field2;
};

struct TSUIndexSet {
    unsigned int _isEmpty:1;
    unsigned int _hasSingleRange:1;
    struct TSUIndexRange _singleRange;
    struct *_multipleRanges;
};

struct TSUOpstat_s {
    _Bool running;
    unsigned long long count;
    struct timeval min_time;
    struct timeval max_time;
    struct timeval total_time;
    struct timeval last_time;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
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

struct atomic<unsigned long> {
    struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> {
        _Atomic unsigned long long __a_value;
    } __a_;
};

struct gzFile_s {
    unsigned int _field1;
    char *_field2;
    long long _field3;
};

struct internal_state;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct vector<NSString *, std::allocator<NSString *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
        id *__value_;
    } __end_cap_;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
} CDStruct_d65e47c4;

typedef struct {
    long long _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
} CDStruct_90be15af;

typedef struct {
    long long _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_70d275a4;

typedef struct {
    unsigned int mFormatType;
    union {
        struct {
            unsigned int mCurrencyCodeIndex:16;
            unsigned int mDecimalPlaces:8;
            unsigned int mNegativeStyle:3;
            unsigned int mShowThousandsSeparator:1;
            unsigned int mUseAccountingStyle:1;
        } mNumberFormatStruct;
        struct {
            unsigned int mFractionAccuracy:8;
        } mFractionFormatStruct;
        struct {
            unsigned int mBase:8;
            unsigned int mBasePlaces:8;
            unsigned int mBaseUseMinusSign:1;
        } mBaseFormatStruct;
        struct {
            unsigned int mSuppressDateFormat:1;
            unsigned int mSuppressTimeFormat:1;
            NSString *mDateTimeFormat;
        } mDateFormatStruct;
        struct {
            unsigned int mUseAutomaticUnits:1;
            unsigned char mDurationUnitSmallest;
            unsigned char mDurationUnitLargest;
            unsigned char mDurationStyle;
        } mDurationFormatStruct;
        struct {
            NSUUID *mCustomFormatKey;
            TSUCustomFormat *mCustomFormat;
            unsigned int mLegacyID;
            unsigned char mAppliedConditionKey;
        } mCustomFormatStruct;
    } ;
} CDStruct_22002e88;

