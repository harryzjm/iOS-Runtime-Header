//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFOSTransaction, HMFTimer, MLModel, NSString, NSURL;

@interface HMIMLModel : HMFObject <HMFTimerDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;
    NSURL *_modelURL;
    MLModel *_model;
    HMFTimer *_watchdogTimer;
    HMFOSTransaction *_transaction;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMFOSTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(retain) MLModel *model; // @synthesize model=_model;
@property(readonly) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void)timerDidFire:(id)arg1;
- (_Bool)_ensureModelWithError:(id *)arg1;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
@property(readonly) MLModel *underlyingModel;
- (id)initWithModelURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
