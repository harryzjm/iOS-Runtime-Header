//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLClassifier-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier <MLClassifier>
{
}

+ (id)sortClassProbabilitiesWithArray:(id)arg1 classLabels:(id)arg2;
+ (id)sortClassProbabilitiesWithMultiArray:(id)arg1 classLabels:(id)arg2;
+ (id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)classLabels;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2 error:(id *)arg3;
- (id)classifierResultFromOutputFeatures:(id)arg1 error:(id *)arg2;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly) MLModelInterface *interface;
@property(readonly) MLModelMetadata *metadata;
@property(readonly, nonatomic) MLModelDescription *modelDescription;

@end

