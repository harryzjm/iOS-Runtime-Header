//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNTimeConversionDictionaryProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>
{
    double _peakValue;
    long long _channelIndex;
    CDStruct_1b6d18a9 _peakTime;
    CDStruct_e83c9415 timeRange;
}

@property(nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(nonatomic) CDStruct_1b6d18a9 peakTime; // @synthesize peakTime=_peakTime;
@property(nonatomic) double peakValue; // @synthesize peakValue=_peakValue;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange;
@property(readonly) NSDictionary *timeConversionDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
