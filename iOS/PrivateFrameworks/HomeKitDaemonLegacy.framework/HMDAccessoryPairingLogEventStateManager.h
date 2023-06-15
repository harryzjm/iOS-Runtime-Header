//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDAccessoryPairingLogEventStateManager : NSObject
{
    struct os_unfair_lock_s _accessoryPairingRetryMapLock;
    struct os_unfair_lock_s _accessoryPairingProgressStateTrackerLock;
    unsigned long long _pairingUIState;
    unsigned long long _recoveryType;
    unsigned long long _previousRecoveryType;
    NSDate *_lastPairingEndTime;
    NSMutableDictionary *_retryCountMap;
    NSMutableDictionary *_pairingProgressStateTracker;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pairingProgressStateTracker; // @synthesize pairingProgressStateTracker=_pairingProgressStateTracker;
@property(readonly, nonatomic) NSMutableDictionary *retryCountMap; // @synthesize retryCountMap=_retryCountMap;
@property(retain, nonatomic) NSDate *lastPairingEndTime; // @synthesize lastPairingEndTime=_lastPairingEndTime;
@property(nonatomic) unsigned long long previousRecoveryType; // @synthesize previousRecoveryType=_previousRecoveryType;
@property(nonatomic) unsigned long long recoveryType; // @synthesize recoveryType=_recoveryType;
@property(nonatomic) unsigned long long pairingUIState; // @synthesize pairingUIState=_pairingUIState;
- (void)resetStatesForNewAddOperation;
- (double)getTimeDurationForProgressStateForIdentifier:(id)arg1 state:(id)arg2;
- (double)getTimeDurationForLongestProgressStateForAccessory:(id)arg1;
- (id)getLastProgressStateForAccessory:(id)arg1;
- (id)getLongestProgressStateForAccessory:(id)arg1;
- (void)clearPairingProgressStateTrackerForIdentifier:(id)arg1;
- (void)updateLastPairingProgressStateEventForIdentifier:(id)arg1 withDate:(id)arg2;
- (void)_updateStateOnPairingProgress:(long long)arg1;
- (void)updatePairingProgressState:(id)arg1;
- (void)startProgressStateTrackerWithDate:(id)arg1 identifier:(id)arg2;
- (void)_handlePairingStateProgressNotification:(id)arg1;
- (void)incrementRetryCount:(id)arg1;
- (void)updateStatesOnResult:(_Bool)arg1;
- (void)clearRetryCountMap;
- (unsigned long long)retryCountForIdentifier:(id)arg1;
- (id)init;

@end

