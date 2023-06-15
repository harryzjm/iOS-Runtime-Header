//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHBaseSceneHostEnvironment.h"

@class BLSBacklightSceneVisualState, NSDate;
@protocol BLSBacklightSceneEnvironment_Private;

__attribute__((visibility("hidden")))
@interface BLSHLocalHostSceneEnvironment : BLSHBaseSceneHostEnvironment
{
    id <BLSBacklightSceneEnvironment_Private> _clientEnvironment;
    BLSBacklightSceneVisualState *_lock_visualState;
    NSDate *_lock_presentationDate;
    NSDate *_lock_visualStateMismatchStartTime;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(_Bool)arg3 triggerEvent:(id)arg4 touchTargetable:(_Bool)arg5 sceneContentsUpdated:(CDUnknownBlockType)arg6 performBacklightRamp:(CDUnknownBlockType)arg7 animationComplete:(CDUnknownBlockType)arg8;
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(CDUnknownBlockType)arg2;
- (void)requestedFidelityForInactiveContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearPresentationDate;
- (id)presentationDate;
- (void)setUnrestrictedFramerateUpdates:(_Bool)arg1;
- (_Bool)hasUnrestrictedFramerateUpdates;
- (void)setLiveUpdating:(_Bool)arg1;
- (_Bool)isLiveUpdating;
- (_Bool)clientSupportsAlwaysOn;
- (id)visualState;
- (_Bool)isClientActive;
- (_Bool)clientHasDelegate;
- (_Bool)hasVisualStateMistmach;
- (id)initWithBacklightSceneEnvironment:(id)arg1;

@end

