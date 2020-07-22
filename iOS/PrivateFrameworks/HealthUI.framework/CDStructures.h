//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct HKAxisMinMaxDefinition {
    double _field1;
    double _field2;
};

struct HKLinearTransform {
    double offset;
    double scale;
};

struct HKRange {
    double _field1;
    double _field2;
};

struct IncrementalSearchResultsDefn {
    unsigned long long _field1;
    struct _NSRange _field2[64];
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _HKLocationSpan {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long index;
    long long zoom;
} CDStruct_6ca94699;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_6ca94699 blockPath;
    long long index;
} CDStruct_767cbfa4;

typedef struct {
    CDStruct_767cbfa4 min;
    CDStruct_767cbfa4 max;
} CDStruct_f3788345;

typedef struct {
    struct CGRect transformedRect;
    double labelValue;
    long long options;
} CDStruct_d6e4b0bd;
