//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EspressoEvaluator : NSObject
{
    NSURL *_modelURL;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)evaluateWithModelURL:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;
- (float)averageLossEvaluation:(id)arg1 dataWrapper:(id)arg2 batchSize:(int)arg3;
- (id)evaluationMetrics:(id)arg1 dataWrapper:(id)arg2 outputName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

