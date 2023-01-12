//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModeling-Protocol.h>
#import <CoreML/MLProgram-Protocol.h>

@class MLProgramContext, NSString;
@protocol MLFeatureProvider;

@protocol MLProgramInternal <MLModeling, MLProgram>
- (void)removeEngineForFunctionName:(NSString *)arg1;
- (MLProgramContext *)newContextAndReturnError:(id *)arg1;
- (id <MLFeatureProvider>)evaluateFunction:(NSString *)arg1 arguments:(id <MLFeatureProvider>)arg2 error:(id *)arg3;
@end

