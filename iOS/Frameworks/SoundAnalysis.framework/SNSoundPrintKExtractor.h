//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/SNFeaturePrintExtractorProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSoundPrintKExtractor <SNFeaturePrintExtractorProtocol>
{
}

+ (id)createWithSampleRate:(double)arg1 windowDuration:(CDStruct_1b6d18a9)arg2 overlapFactor:(float)arg3 error:(id *)arg4;
- (id)initWithSampleRate:(double)arg1 windowDuration:(CDStruct_1b6d18a9)arg2 overlapFactor:(float)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, nonatomic) unsigned int blockSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) void *resultsBox;
@property(readonly) Class superclass;

@end
