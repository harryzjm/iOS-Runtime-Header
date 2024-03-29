//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface period_lstm : NSObject
{
    MLModel *_model;
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)URLOfModelInThisBundle;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3 error:(id *)arg4;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithMLModel:(id)arg1;

@end

