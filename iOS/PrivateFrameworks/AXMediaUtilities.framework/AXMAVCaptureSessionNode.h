//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMVisionAnalysisOptions, NSObject;
@protocol AXMAVCaptureSessionNodeDelegate, OS_dispatch_queue;

@interface AXMAVCaptureSessionNode
{
    NSObject<OS_dispatch_queue> *_avkit_queue;
    id <AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;
    AXMVisionAnalysisOptions *_analysisOptions;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate; // @synthesize captureSessionNodeDelegate=_captureSessionNodeDelegate;
- (void).cxx_destruct;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)setShouldProcessRemotely:(_Bool)arg1;

@end
