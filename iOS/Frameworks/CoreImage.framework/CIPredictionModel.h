//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/MLFeatureProvider-Protocol.h>

@class MLModel, NSSet;

__attribute__((visibility("hidden")))
@interface CIPredictionModel : NSObject <MLFeatureProvider>
{
    struct __CVBuffer *imageBuffer;
    MLModel *_model;
    struct CIPredictionModelImageFeatures _inputImageFeatures;
    struct CIPredictionModelImageFeatures _outputImageFeatures;
}

@property(nonatomic) struct CIPredictionModelImageFeatures outputImageFeatures; // @synthesize outputImageFeatures=_outputImageFeatures;
@property(nonatomic) struct CIPredictionModelImageFeatures inputImageFeatures; // @synthesize inputImageFeatures=_inputImageFeatures;
@property(retain, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (struct __CVBuffer *)predictUsingInputBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (_Bool)processOutputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (_Bool)processInputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (_Bool)processInputModel:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

