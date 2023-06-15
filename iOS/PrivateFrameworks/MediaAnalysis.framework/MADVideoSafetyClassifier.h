//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SCMLHandler, SCMLVideoAnalyzer;

__attribute__((visibility("hidden")))
@interface MADVideoSafetyClassifier
{
    CDStruct_1b6d18a9 _timeLastProcess;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _end;
    float _processTimeInterval;
    short _sensitivity;
    NSMutableArray *_results;
    SCMLHandler *_handler;
    SCMLVideoAnalyzer *_videoAnalyzer;
}

+ (id)analyzeVideoAssetOnDemandWithURL:(id)arg1 localIdentifier:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 cancelBlock:(CDUnknownBlockType)arg4 andProgressHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (id)results;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)analyzeFrameWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 andFlags:(unsigned long long *)arg4;
- (void)addAnalysisResults;
- (int)configureAndStartVideoAnalyzer;
- (void)configureProcessTimeIntervalFrom:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end

