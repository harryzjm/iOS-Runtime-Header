//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableIndexSet, PXCArrayStore;

@interface PXStoryTransitionTimeline
{
    NSMutableIndexSet *_clipIdentifiersInTransition;
    struct CGPoint _fromSegmentClipOffset;
    CDStruct_e83c9415 _fromSegmentTimeRange;
    long long _duplicateSegmentIdentifier;
    NSMutableDictionary *_originalClipIdentifiersByDuplicateClipIdentifiers;
    NSMutableDictionary *_duplicateClipIdentifiersByOriginalClipIdentifiers;
    PXCArrayStore *_segmentTimeRanges;
    PXCArrayStore *_segmentInfos;
    PXCArrayStore *_clipTimeRanges;
    PXCArrayStore *_clipFrames;
    PXCArrayStore *_clipInfos;
    CDStruct_b1a1f14e _transitionInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXCArrayStore *clipInfos; // @synthesize clipInfos=_clipInfos;
@property(readonly, nonatomic) PXCArrayStore *clipFrames; // @synthesize clipFrames=_clipFrames;
@property(readonly, nonatomic) PXCArrayStore *clipTimeRanges; // @synthesize clipTimeRanges=_clipTimeRanges;
@property(readonly, nonatomic) PXCArrayStore *segmentInfos; // @synthesize segmentInfos=_segmentInfos;
@property(readonly, nonatomic) PXCArrayStore *segmentTimeRanges; // @synthesize segmentTimeRanges=_segmentTimeRanges;
@property(readonly, nonatomic) CDStruct_912cb5d2 transitionInfo; // @synthesize transitionInfo=_transitionInfo;
- (CDStruct_5e045380)_transitionClipInfoWithIdentifier:(long long)arg1 fromOriginalClipInfo:(CDStruct_5e045380)arg2;
- (id)clipWithIdentifier:(long long)arg1;
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSegmentsInTimeRange:(CDStruct_e83c9415)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)numberOfSegments;
- (void)_modifyClipsIfNeeded:(const CDStruct_e83c9415 *)arg1 frames:(const struct CGRect *)arg2 infos:(const CDStruct_5e045380 *)arg3 count:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_modifySegmentsIfNeeded:(const CDStruct_e83c9415 *)arg1 infos:(const CDStruct_700d4edc *)arg2 count:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (struct CGPoint)_offsetBetweenSegmentWithIdentifier:(long long)arg1 andSegmentWithIdentifier:(long long)arg2;
- (void)_prepareForTransitionInfo:(CDStruct_912cb5d2)arg1;
- (id)initWithOriginalTimeline:(id)arg1 transitionInfo:(CDStruct_912cb5d2)arg2;
- (id)initWithOriginalTimeline:(id)arg1;

@end
