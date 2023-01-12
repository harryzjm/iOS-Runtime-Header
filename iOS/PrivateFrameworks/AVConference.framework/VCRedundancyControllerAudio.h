//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSString;
@protocol VCRedundancyControlAlgorithm;

__attribute__((visibility("hidden")))
@interface VCRedundancyControllerAudio : NSObject
{
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id <VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    double _currentRedundancyInterval;
    _Bool _isNWConnectionEnabled;
    int _statisticRegistrationIndexNetwork;
    int _statisticRegistrationIndexNWConnection;
    int _networkStatisticsType;
}

- (void)reportRedundancyPercentage:(unsigned int)arg1 redundancyInterval:(double)arg2;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_7df19fcb)arg1;
- (void)dealloc;
- (void)unregisterStatistics;
- (id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

