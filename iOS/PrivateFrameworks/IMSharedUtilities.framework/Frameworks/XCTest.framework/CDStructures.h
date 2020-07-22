//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CGVector {
    double dx;
    double dy;
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct time_value {
    int seconds;
    int microseconds;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_a561fd19;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3[1];
} CDStruct_27a325c0;
