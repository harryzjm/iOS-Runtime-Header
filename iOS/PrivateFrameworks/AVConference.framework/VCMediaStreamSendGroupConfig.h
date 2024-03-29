//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSObject;
@protocol VCRedundancyControllerProtocol;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSendGroupConfig
{
    _Bool _shouldSynchronizeWithSourceRTPTimestamps;
    unsigned int _streamGroupMode;
    unsigned int _redundancyMode;
    unsigned int _redundancyPercentage;
    AVCStatisticsCollector *_statisticsCollector;
    NSObject<VCRedundancyControllerProtocol> *_redundancyController;
}

@property(retain, nonatomic) NSObject<VCRedundancyControllerProtocol> *redundancyController; // @synthesize redundancyController=_redundancyController;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
@property(nonatomic) unsigned int redundancyMode; // @synthesize redundancyMode=_redundancyMode;
@property(nonatomic) unsigned int streamGroupMode; // @synthesize streamGroupMode=_streamGroupMode;
@property(nonatomic) _Bool shouldSynchronizeWithSourceRTPTimestamps; // @synthesize shouldSynchronizeWithSourceRTPTimestamps=_shouldSynchronizeWithSourceRTPTimestamps;
- (void)dealloc;

@end

