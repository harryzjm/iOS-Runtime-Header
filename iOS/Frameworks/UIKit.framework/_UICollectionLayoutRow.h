//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutRow : NSObject
{
    _Bool _vertical;
    int _layoutAxis;
    NSMutableArray *_frames;
    NSMutableArray *_insets;
    double _layoutDimension;
    long long _expectedItemCount;
    double _minimumInterItemSpacing;
    struct CGSize _aggregateFrameSizes;
    struct UIEdgeInsets _edgeInsets;
    struct CGRect _contentFrame;
}

@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) struct CGSize aggregateFrameSizes; // @synthesize aggregateFrameSizes=_aggregateFrameSizes;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) long long expectedItemCount; // @synthesize expectedItemCount=_expectedItemCount;
@property(nonatomic) double layoutDimension; // @synthesize layoutDimension=_layoutDimension;
@property(nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(retain, nonatomic) NSMutableArray *insets; // @synthesize insets=_insets;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
- (double)_spaceUsedForLayoutDimension;
- (double)_layoutDimensionForFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)_spaceFramesOrthogonallyEvenlyWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromBottomWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisCenteredWithDimension:(double)arg1;
- (void)_alignFramesFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesFromBottomWithDimension:(double)arg1;
- (void)_alignFramesJustifiedWithDimension:(double)arg1;
- (void)_spaceFramesEvenlyWithDimension:(double)arg1;
- (long long)_numberOfVariableSpacedEdgesForEdgeSpaces:(id)arg1;
- (_Bool)_edgeSpaceIncludesVariableSpacing:(double)arg1;
- (double)_effectiveEdgeSpaceForValue:(double)arg1;
- (double)_fixedSpacingForEdgeSpaces:(id)arg1;
- (id)_frameEdgeSpacingsForInsetsForAxis:(int)arg1;
- (struct UIEdgeInsets)_effectiveInsetsForInsets:(struct UIEdgeInsets)arg1;
- (void)_addFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (struct CGPoint)_nextFrameOffsetForInsets:(struct UIEdgeInsets)arg1;
- (long long)currentFrameCount;
- (struct CGRect)contentFrameWithOffset:(struct CGSize)arg1;
- (id)framesWithOffset:(struct CGSize)arg1;
- (void)alignFramesForOrthogonalAxisWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (void)alignFramesWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (void)spaceFramesEvenlyForLayoutAxis:(int)arg1 withDimension:(double)arg2;
- (struct CGRect)addFrameOfSize:(struct CGSize)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (_Bool)isSpaceAvailableForFrameOfSize:(struct CGSize)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (_Bool)isRowFull;
- (id)initWithAxis:(int)arg1 itemCount:(long long)arg2 containerDimensions:(struct CGSize)arg3 insets:(struct UIEdgeInsets)arg4 minimumInterItemSpacing:(double)arg5;

@end

