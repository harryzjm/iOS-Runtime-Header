//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _packetLossPercentageIncreaseThresholds[3];
    unsigned int _packetLossPercentageDecreaseThresholds[3];
    _Bool _isPacketLossIncreasing;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageThreshold;
    unsigned int _burstLossPacketCount;
    _Bool _isUplinkRecentlyCongested;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(unsigned int *)arg1;
- (void)computeRedundancyInfo;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_48a7b5a5)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

