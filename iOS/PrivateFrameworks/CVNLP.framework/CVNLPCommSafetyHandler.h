//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CVNLPCommSafetyImageAnalyzer, CVNLPCommSafetyTextAnalyzer, CVNLPPerformance, NSDictionary;
@protocol OS_dispatch_queue;

@interface CVNLPCommSafetyHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    CVNLPCommSafetyImageAnalyzer *_imageAnalyzer;
    CVNLPCommSafetyTextAnalyzer *_textAnalyzer;
    NSDictionary *_options;
    CVNLPPerformance *_perfResults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CVNLPPerformance *perfResults; // @synthesize perfResults=_perfResults;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) CVNLPCommSafetyTextAnalyzer *textAnalyzer; // @synthesize textAnalyzer=_textAnalyzer;
@property(readonly) CVNLPCommSafetyImageAnalyzer *imageAnalyzer; // @synthesize imageAnalyzer=_imageAnalyzer;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (id)performanceStatistics;
- (id)classifyPixelBuffer:(struct __CVBuffer *)arg1 startDate:(id)arg2 endDate:(id)arg3 stagedText:(id)arg4 inConversationWithIdentifier:(id)arg5 error:(id *)arg6;
- (id)classifyPixelBuffer:(struct __CVBuffer *)arg1 stagedText:(id)arg2 inConversationWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)processConversationsWithStartDate:(id)arg1 endDate:(id)arg2 previousClassifications:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (id)getOperatingPointDataForClassName:(id)arg1;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg1;
- (long long)classifyPixelBuffer:(struct __CVBuffer *)arg1;
- (id)generateClassificationScoresForImage:(struct CGImage *)arg1;
- (long long)classifyImage:(struct CGImage *)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end
