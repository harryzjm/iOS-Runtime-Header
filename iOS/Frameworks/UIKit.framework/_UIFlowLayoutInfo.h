//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

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

@property(nonatomic) _Bool estimatesSizes; // @synthesize estimatesSizes=_estimatesSizes;
@property(nonatomic) __weak UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(nonatomic) _Bool usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)invalidatedIndexPaths;
@property(readonly, nonatomic) struct CGSize computedEstimatedSize;
- (id)specifiedItemSizes;
- (id)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (id)copy;
- (id)snapshot;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)addSection;
- (void)invalidate:(_Bool)arg1;
- (id)init;

@end

