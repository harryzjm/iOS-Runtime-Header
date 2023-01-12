//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryVisualDiagnosticsProvider-Protocol.h>

@class PXMediaProvider, PXStoryAutoEditMomentsProvider, PXStoryConfiguration, PXStoryModel, PXStoryResourcesDataSource;
@protocol PXStoryTimeline;

@interface PXStoryTimelineVisualDiagnosticsProvider : NSObject <PXStoryVisualDiagnosticsProvider>
{
    PXStoryModel *_model;
    id <PXStoryTimeline> _timeline;
    PXStoryAutoEditMomentsProvider *_momentsProvider;
    PXStoryResourcesDataSource *_resourcesDataSource;
    PXStoryConfiguration *_configuration;
    PXMediaProvider *_mediaProvider;
    double _screenScale;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXStoryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
@property(readonly, nonatomic) PXStoryAutoEditMomentsProvider *momentsProvider; // @synthesize momentsProvider=_momentsProvider;
@property(readonly, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) PXStoryModel *model; // @synthesize model=_model;
- (void)_drawVerticalInRect:(struct CGRect)arg1 backgroundColor:(id)arg2 context:(id)arg3 configuration:(CDUnknownBlockType)arg4;
- (void)_drawAsset:(id)arg1 inRect:(struct CGRect)arg2 context:(id)arg3;
- (void)_drawSegmentAtIndex:(long long)arg1 timeline:(id)arg2 inRect:(struct CGRect)arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (id)_descriptionForFaces:(id)arg1 context:(id)arg2;
- (void)_addMiscellaneousDiagnostics:(id)arg1;
- (void)_addCropDiagnostics:(id)arg1;
- (id)_segmentIndexesWithInvalidOrderOutTransitionInTimeline:(id)arg1;
- (id)_moduleStartSegmentIndexesInTimeline:(id)arg1;
- (id)_autoEditDebugInfoBySegmentInTimeline:(id)arg1;
- (id)_moduleDescriptionsBySegmentInTimeline:(id)arg1;
- (id)_momentEndSegmentIndexesInTimeline:(id)arg1;
- (id)_descriptionForMovementType:(long long)arg1;
- (id)_movementDescriptionForSegmentAtIndex:(long long)arg1 inTimeline:(id)arg2;
- (id)_descriptionForDurationInfo:(CDStruct_c8943d03)arg1;
- (void)_addAssetsDetailsTable:(id)arg1;
- (void)_addSegmentsAutoEditDebugInfoTables:(id)arg1 debugInfoKeys:(id)arg2;
- (unsigned long long)_approxLinesInString:(id)arg1 lineLength:(unsigned long long)arg2;
- (void)_addSegmentsDetailsTable:(id)arg1;
- (void)_addCinematicDiagnostics:(id)arg1;
- (void)_addSegmentDiagnostics:(id)arg1;
- (void)_addCoverPage:(id)arg1;
- (void)addVisualDiagnosticsToContext:(id)arg1;
- (id)initWithModel:(id)arg1 screenScale:(double)arg2;
- (id)init;

@end
