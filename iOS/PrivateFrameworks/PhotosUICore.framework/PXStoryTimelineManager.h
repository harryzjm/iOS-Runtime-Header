//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXStoryMutableTimelineManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSIndexSet, NSMutableArray, NSObject, NSProgress, NSString, PXStoryProducerResult, PXStoryResourcesDataSourceManager, PXStoryStyleManager, PXStoryTimelineSpecManager, PXUpdater;
@protocol OS_dispatch_queue, PXStoryErrorReporter, PXStoryLoadingCoordinator, PXStoryTimeline, PXStoryTimelineProducer;

@interface PXStoryTimelineManager <PXStoryDiagnosticHUDContentProvider, PXStoryMutableTimelineManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isUpdatingTimeline;
    long long _paperTrailLength;
    NSMutableArray *_targetTimelineResultsPaperTrail;
    NSMutableArray *_timelinesPaperTrail;
    _Bool _isTimelineFinal;
    _Bool _isTargetTimelineFinal;
    NSObject<OS_dispatch_queue> *_storyQueue;
    NSIndexSet *_visibleSegmentIdentifiers;
    PXStoryTimelineSpecManager *_specManager;
    PXStoryResourcesDataSourceManager *_resourcesDataSourceManager;
    PXStoryStyleManager *_styleManager;
    id <PXStoryLoadingCoordinator> _loadingCoordinator;
    id <PXStoryErrorReporter> _errorReporter;
    unsigned long long _options;
    unsigned long long _paperTrailOptions;
    id <PXStoryTimeline> _timeline;
    unsigned long long _timelineAttributes;
    id <PXStoryTimelineProducer> _timelineProducer;
    PXUpdater *_updater;
    PXStoryProducerResult *_targetTimelineResult;
    NSProgress *_targetTimelineProgress;
    NSIndexSet *_pendingVisibleSegmentIdentifiers;
}

+ (id)timelineManagerWithTimelineProducer:(id)arg1 resourcesDataSourceManager:(id)arg2 styleManager:(id)arg3 specManager:(id)arg4 configuration:(id)arg5 loadingCoordinator:(id)arg6 paperTrailOptions:(unsigned long long)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *pendingVisibleSegmentIdentifiers; // @synthesize pendingVisibleSegmentIdentifiers=_pendingVisibleSegmentIdentifiers;
@property(retain, nonatomic) NSProgress *targetTimelineProgress; // @synthesize targetTimelineProgress=_targetTimelineProgress;
@property(nonatomic) _Bool isTargetTimelineFinal; // @synthesize isTargetTimelineFinal=_isTargetTimelineFinal;
@property(retain, nonatomic) PXStoryProducerResult *targetTimelineResult; // @synthesize targetTimelineResult=_targetTimelineResult;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) id <PXStoryTimelineProducer> timelineProducer; // @synthesize timelineProducer=_timelineProducer;
@property(readonly, nonatomic) _Bool isTimelineFinal; // @synthesize isTimelineFinal=_isTimelineFinal;
@property(readonly, nonatomic) unsigned long long timelineAttributes; // @synthesize timelineAttributes=_timelineAttributes;
@property(readonly, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) unsigned long long paperTrailOptions; // @synthesize paperTrailOptions=_paperTrailOptions;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) id <PXStoryLoadingCoordinator> loadingCoordinator; // @synthesize loadingCoordinator=_loadingCoordinator;
@property(readonly, nonatomic) PXStoryStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // @synthesize resourcesDataSourceManager=_resourcesDataSourceManager;
@property(readonly, nonatomic) PXStoryTimelineSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers; // @synthesize visibleSegmentIdentifiers=_visibleSegmentIdentifiers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateTimelineAttributes;
- (void)_invalidateTimelineAttributes;
- (void)_updateTimeline;
- (void)_invalidateTimeline;
- (void)_updatePendingVisibleSegmentIdentifiers;
- (void)_invalidatePendingVisibleSegmentIdentifiers;
- (void)_handleUpdatedTargetTimelineResult:(id)arg1;
- (void)_updateTargetTimeline;
- (void)_invalidateTargetTimeline;
- (void)_setNeedsUpdate;
- (void)_applyPendingVisibleSegmentIdentifiers;
- (void)setVisibleSegmentIdentifiers:(id)arg1 afterUpdatePass:(_Bool)arg2;
- (void)setVisibleSegmentIdentifiers:(id)arg1;
- (struct _NSRange)_rangeOfVisibleDisplayAssetsInResourcesDataSource:(id)arg1;
@property(readonly, nonatomic) _Bool requiresUpdatedTargetTimelineImmediately;
- (void)setIsTimelineFinal:(_Bool)arg1;
- (void)setTimelineAttributes:(unsigned long long)arg1;
- (void)setTimeline:(id)arg1;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTimelineProducer:(id)arg1 resourcesDataSourceManager:(id)arg2 styleManager:(id)arg3 specManager:(id)arg4 loadingCoordinator:(id)arg5 errorReporter:(id)arg6 options:(unsigned long long)arg7 paperTrailOptions:(unsigned long long)arg8;
- (id)init;
- (id)_diagnosticMovementTextForClipInfo:(CDStruct_5e045380)arg1 segmentClipCount:(int)arg2 autoEditClip:(id)arg3;
- (id)_diagnosticStyleTextForClipInfo:(CDStruct_5e045380)arg1 segmentClipCount:(int)arg2 autoEditClip:(id)arg3;
- (id)_diagnosticTextForSegmentIdentifier:(long long)arg1 segmentTimeRange:(CDStruct_e83c9415)arg2 HUDType:(long long)arg3 decisionList:(id)arg4;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
