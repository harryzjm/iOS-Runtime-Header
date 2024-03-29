//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol UIActivityContinuationManagerApplicationContext;

__attribute__((visibility("hidden")))
@interface UIActivityContinuationManager : NSObject
{
    id <UIActivityContinuationManagerApplicationContext> _context;
    NSString *_currentActivityContinuationType;
    NSString *_currentActivityContinuationUUIDString;
    NSProgress *_currentActivityContinuationProgress;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress; // @synthesize currentActivityContinuationProgress=_currentActivityContinuationProgress;
@property(copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString; // @synthesize currentActivityContinuationUUIDString=_currentActivityContinuationUUIDString;
@property(copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType; // @synthesize currentActivityContinuationType=_currentActivityContinuationType;
- (void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2;
- (void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)userActivityWillSave:(id)arg1;
- (void)_userActivityWillSave:(id)arg1;
- (_Bool)activityContinuationsAreBeingTracked;
- (id)activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 originatingProcess:(id)arg3;
- (void)handleActivityContinuation:(id)arg1 isSuspended:(_Bool)arg2;
- (void)_clearCurrentActivityContinuationCancelingProgress:(_Bool)arg1;
- (id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_delegateHandledContinueActivityWithType:(id)arg1;
- (void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (_Bool)_continueUserActivity:(id)arg1;
- (void)_endCurrentActivityContinuationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_endCurrentActivityContinuationAndDisplayError:(id)arg1;
- (void)_hideCurrentActivityContinuationProgressUI;
- (void)_displayCurrentActivityContinuationProgressUI;
- (id)initWithApplicationContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

