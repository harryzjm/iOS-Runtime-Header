//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVMobileChromelessControlsLayoutConfiguration {
    unsigned long long includedControls;
    _Bool expanded;
    double controlsPadding;
    unsigned long long auxiliaryControlsPlacement;
    NSArray *pinnedAuxiliaryControls;
    _Bool contentTabPresented;
    double contentTabPresentationHeight;
};

struct AVMobileChromelessControlsVisibilityState {
    unsigned long long visibleControls;
    _Bool backgroundGradientActive;
    _Bool liveEdgeMarkContentTagVisible;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

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

