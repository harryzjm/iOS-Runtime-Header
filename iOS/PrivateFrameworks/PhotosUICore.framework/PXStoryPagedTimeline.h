//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCArrayStore, PXStoryPagedTimelineSpec;

@interface PXStoryPagedTimeline
{
    long long _numberOfPages;
    PXStoryPagedTimelineSpec *_spec;
    PXCArrayStore *_transformedClipInfosStore;
    PXCArrayStore *_transformedRectsStore;
    CDUnknownBlockType _clipSizeTranformer;
    struct CGSize _size;
    CDStruct_982265da _keyPageMix;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType clipSizeTranformer; // @synthesize clipSizeTranformer=_clipSizeTranformer;
@property(readonly, nonatomic) PXCArrayStore *transformedRectsStore; // @synthesize transformedRectsStore=_transformedRectsStore;
@property(readonly, nonatomic) PXCArrayStore *transformedClipInfosStore; // @synthesize transformedClipInfosStore=_transformedClipInfosStore;
@property(readonly, nonatomic) PXStoryPagedTimelineSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) CDStruct_982265da keyPageMix; // @synthesize keyPageMix=_keyPageMix;
@property(readonly, nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (struct CGSize)size;
- (CDStruct_e83c9415)timeRange;
- (struct CGRect)frameForSegmentWithIdentifier:(long long)arg1;
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)clipWithIdentifier:(long long)arg1;
- (void)_transormClips:(const CDStruct_5e045380 *)arg1 frames:(const struct CGRect *)arg2 count:(long long)arg3 transformHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)_bestClipIndexForSegmentWithClipInfos:(const CDStruct_5e045380 *)arg1 frames:(const struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateSegmentsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)_pageIndexAtX:(double)arg1;
- (id)description;
- (id)initWithOriginalTimeline:(id)arg1 keyPage:(CDStruct_982265da)arg2 spec:(id)arg3;
- (id)initWithOriginalTimeline:(id)arg1 interpageSpacing:(double)arg2;
- (id)initWithOriginalTimeline:(id)arg1;

@end
