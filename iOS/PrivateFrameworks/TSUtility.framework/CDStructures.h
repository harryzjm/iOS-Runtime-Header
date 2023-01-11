//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct ObjcSharedPtr<NSString> {
    id _field1;
};

struct SFUZipEndOfCentralDirectory {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
};

struct TSUCustomFormat {
    struct ObjcSharedPtr<NSString> _field1;
    int _field2;
    CDStruct_8acff13f _field3;
    struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition>> _field4;
};

struct TSUFlushableObjectInfo {
    id _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5[2];
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

struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *>>> {
    struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode;

struct gzFile_s {
    unsigned int _field1;
    char *_field2;
    long long _field3;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> {
    struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *>>> _field2;
        struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerFlushingOrderLess> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> {
    struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *>>> _field2;
        struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerTimeStampLess> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<TSUStringChunk>;

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

struct vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk>>> {
    struct shared_ptr<TSUStringChunk> *__begin_;
    struct shared_ptr<TSUStringChunk> *__end_;
    struct __compressed_pair<std::__1::shared_ptr<TSUStringChunk>*, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk>>> {
        struct shared_ptr<TSUStringChunk> *__value_;
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
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    double _field6;
    unsigned int :8;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_8acff13f;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

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

typedef struct CDStruct_183601bc;

typedef struct {
    int mFormatType;
    union {
        struct {
            NSString *mCurrencyCode;
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
            int mDurationUnitSmallest;
            int mDurationUnitLargest;
            int mDurationStyle;
        } mDurationFormatStruct;
        struct {
            unsigned int mCustomFormatID;
            CDStruct_183601bc *mData;
        } mCustomFormatStruct;
        struct {
            double mMinimum;
            double mMaximum;
            double mIncrement;
            int mDisplayFormatType;
            unsigned int mOrientation:2;
            unsigned int mPosition:2;
        } mControlFormatStruct;
        struct {
            int mInitialValue;
            unsigned int mMultipleChoiceListFormatID;
            id mData;
        } mMultipleChoiceListFormatStruct;
    } ;
} CDStruct_95e644ef;

