//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/INDeleteTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTDeleteTimerIntentHandler <INDeleteTimerIntentHandling>
{
}

- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)_deleteTimer:(id)arg1 multiple:(_Bool)arg2 dryRun:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)handleDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
