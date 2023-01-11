//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNConfidenceProviding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSString;

@interface SNSpeechUtteranceResult : NSObject <SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding>
{
    _Bool _detected;
    double confidence;
    CDStruct_e83c9415 timeRange;
}

@property(nonatomic) _Bool detected; // @synthesize detected=_detected;
- (void)setConfidence:(double)arg1;
@property(readonly, nonatomic) double confidence;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
