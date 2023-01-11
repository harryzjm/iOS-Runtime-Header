//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentage;
    double _packetLossPercentageVideo;
    double _plrEnvelope;
    _Bool _isNetworkCongested;
    unsigned int _maxAllowedRedundancyPercentage;
    unsigned int _burstyLoss[8];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
    unsigned int _redundancyMode;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    struct OpaqueVCFECFeedbackAnalyzer *_feedbackAnalyzer;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (CDStruct_cd7ddd1c)getFecLevelPerFrameSizeVector;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (unsigned int)computeRedundancyWithLossPercentage;
- (void)updateBurstyLoss:(unsigned int)arg1;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_56e8fa21)arg1;
- (CDStruct_9650830d)setupFeedbackAnalyzerConfig;
- (void)dealloc;
- (id)initWithRedundancyControllerMode:(unsigned int)arg1 maxAllowedRedundancyPercentage:(unsigned int)arg2 mediaControlInfoFECFeedbackVersion:(unsigned char)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
