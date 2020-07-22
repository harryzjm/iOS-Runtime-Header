//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXMVisionEngineDiagnosticInfo : NSObject
{
    _Bool _isProcessingCaptureSessionFrames;
    double _captureSessionProcessingBeginTime;
    double _captureSessionProcessingEndTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pipelineTimings;
    unsigned long long _totalFramesProcessed;
    unsigned long long _totalFramesDropped;
}

@property(nonatomic) unsigned long long totalFramesDropped; // @synthesize totalFramesDropped=_totalFramesDropped;
@property(nonatomic) unsigned long long totalFramesProcessed; // @synthesize totalFramesProcessed=_totalFramesProcessed;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *diagnosticReport;
- (void)didDropCaptureSessionFrame;
- (void)didProcessCaptureSessionFrame;
- (void)didEndProcessingCaptureSessionFrames;
- (void)didBeginProcessingCaptureSessionFrames;
- (double)_queue_averageFramesDroppedPerSecond;
@property(readonly, nonatomic) double averageFramesDroppedPerSecond;
- (double)_queue_averageFramesProcessedPerSecond;
@property(readonly, nonatomic) double averageFramesProcessedPerSecond;
- (void)addPipelineTiming:(id)arg1;
@property(readonly, nonatomic) NSArray *pipelineTimings;
- (id)init;

@end
