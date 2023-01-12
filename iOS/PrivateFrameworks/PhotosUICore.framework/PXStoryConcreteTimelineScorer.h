//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryTimelineScorer-Protocol.h>

@class _PXStoryConcreteScorerDisplayAsset, _PXStoryConcreteScorerDisplayAssetsFetchResult;
@protocol PXStoryTimelineStyle;

@interface PXStoryConcreteTimelineScorer : NSObject <PXStoryTimelineScorer>
{
    _PXStoryConcreteScorerDisplayAssetsFetchResult *_segmentDisplayAssets;
    _PXStoryConcreteScorerDisplayAsset *_splitAsset;
    double _videoMaximumAspectFillScale;
    double _livePhotoSameOrientationMaximumScales[2];
    double _livePhotoOppositeOrientationMaximumScales[2];
    double _scoreForAspectFillOneUpWithPoorCrop;
    id <PXStoryTimelineStyle> _timelineStyle;
    long long _saliencyFallbackBehavior;
}

- (void).cxx_destruct;
@property(nonatomic) long long saliencyFallbackBehavior; // @synthesize saliencyFallbackBehavior=_saliencyFallbackBehavior;
@property(readonly, nonatomic) id <PXStoryTimelineStyle> timelineStyle; // @synthesize timelineStyle=_timelineStyle;
- (double)_scoreForSplitAsset:(id)arg1 inTimeline:(id)arg2 segmentTimeRange:(CDStruct_e83c9415)arg3;
- (double)_scoreForClipInfo:(const CDStruct_5e045380 *)arg1 inClipFrame:(struct CGRect)arg2 timelineBounds:(struct CGRect)arg3;
- (double)scoreForTimeline:(id)arg1;
@property(readonly, nonatomic) double verySignificantScore;
- (id)initWithTimelineStyle:(id)arg1;
- (id)init;

@end
