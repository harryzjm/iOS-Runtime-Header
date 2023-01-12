//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableController-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>

@class NSObject, NSString, PXObservable, PXUpdater;
@protocol OS_dispatch_queue, PXStoryQueueParticipant;

@interface PXStoryController <PXStoryMutableController, PXChangeObserver, PXStoryQueueParticipant>
{
    NSObject<OS_dispatch_queue> *_storyQueue;
    PXObservable<PXStoryQueueParticipant> *_observableModel;
    PXUpdater *_updater;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) __weak PXObservable<PXStoryQueueParticipant> *observableModel; // @synthesize observableModel=_observableModel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)handleModelChange:(unsigned long long)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)configureUpdater:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
