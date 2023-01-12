//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject
{
    NSDictionary *_policies;
    double _expectedProcessEndTime;
    unsigned int _packetCountInNetworkQueue;
    unsigned int _networkQueueServiceRate;
    unsigned int _networkQueueServiceRateMean;
    unsigned int _networkQueueServiceRateStdDev;
    unsigned int _networkQueueAQMRate;
    int _currentIndexForServiceRate;
    int _currentIndexForServiceRateDistribution;
    int _currentIndexForAQMRate;
    double _lastNetworkQueueServiceRateLoadTime;
    double _lastNetworkQueueServiceRateDistributionLoadTime;
    double _lastNetworkQueueAQMRateLoadTime;
    double _budgetBufferPktTime[4096];
    double _budgetBufferPktSize[4096];
    int _budgentBufferIndex;
    int _budgetBufferSize;
}

@property unsigned int packetCountInNetworkQueue; // @synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime; // @synthesize expectedProcessEndTime=_expectedProcessEndTime;
- (int)getRemainingAQMBudgetWithPacket:(id)arg1;
- (void)addPacketToBudgetBuffer:(id)arg1;
- (_Bool)shouldDropPacketWithCurrentAQMBudget:(id)arg1;
- (void)process:(id)arg1;
- (double)computeNetworkServiceRate;
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

