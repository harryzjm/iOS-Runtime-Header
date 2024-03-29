//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutInfo : NSObject
{
    _Bool _useFloatingHeaderFooter;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    _Bool _isValid;
    struct CGSize _computedEstimatedSum;
    long long _computedEstimatedCount;
    _Bool _usesFloatingHeaderFooter;
    _Bool _horizontal;
    _Bool _leftToRight;
    _Bool _estimatesSizes;
    NSMutableArray *_sections;
    double _dimension;
    UICollectionViewFlowLayout *_layout;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
- (id)copy;
- (id)init;

@end

