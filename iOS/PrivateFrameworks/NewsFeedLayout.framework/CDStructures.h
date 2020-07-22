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
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    double headlineStyle1Scale;
    double headlineStyle2Scale;
    double headlineStyle3Scale;
} CDStruct_3d2913aa;

typedef struct {
    long long typeACellType;
    long long typeAColumnSpan;
    long long typeARowSpan;
    long long typeBCellType;
    long long typeBColumnSpan;
    long long typeBRowSpan;
    long long typeCCellType;
    long long typeCColumnSpan;
    long long typeCRowSpan;
} CDStruct_bfc4548b;
