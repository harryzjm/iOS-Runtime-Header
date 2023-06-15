//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEventTagProcessor.h>

@class HMDMatterThirdPartyPairingLogEvent, HMMStateTracker;

__attribute__((visibility("hidden")))
@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor
{
    HMDMatterThirdPartyPairingLogEvent *_logEvent;
    long long _startTime;
    HMMStateTracker *_stateTracker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMMStateTracker *stateTracker; // @synthesize stateTracker=_stateTracker;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) HMDMatterThirdPartyPairingLogEvent *logEvent; // @synthesize logEvent=_logEvent;
- (void)setLogEventCloseReason:(unsigned long long)arg1;
- (void)closeSessionWithEvent:(id)arg1;
- (void)processStateChange:(id)arg1;
- (void)processLongestPairingState:(id)arg1;
- (void)processCredentialsToClientEvent:(id)arg1;
- (void)processWiFiScanResultsEvent:(id)arg1;
- (void)processThreadScanResultsEvent:(id)arg1;
- (void)processPairingTransport:(id)arg1;
- (void)processFirmwareVersionEvent:(id)arg1;
- (void)processCASESanityCheckEvent:(id)arg1;
- (void)processAccessoryInfoEvent:(id)arg1;
- (void)processPairingErrorEvent:(id)arg1;
- (void)processPairingSuccessEvent:(id)arg1;
- (void)processPairingStartEvent:(id)arg1;
- (id)tagProcessingBlocks;
- (id)initWithSubmitter:(id)arg1;

@end

