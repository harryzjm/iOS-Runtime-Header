//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLModelConfiguration, MLModelDescription, NSString;

@interface CHSingletonMLModel : NSObject
{
    NSString *_modelKey;
    long long _modelUseCount;
    MLModel *_model;
}

+ (void)releaseModelWithKey:(id)arg1;
+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (void)setup;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *modelKey; // @synthesize modelKey=_modelKey;
- (long long)usageCount;
@property(readonly, nonatomic) MLModelConfiguration *configuration;
@property(readonly, nonatomic) MLModelDescription *modelDescription;
- (id)model;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)decrementUsageCount;
- (void)incrementUsageCount;
- (id)initWithMLModel:(id)arg1 modelKey:(id)arg2;

@end

