//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLModeling-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSOrderedSet;

@interface MLOneHotEncoder <MLModelSpecificationLoader, MLModeling>
{
    _Bool _ouputSparse;
    _Bool _handleUnknown;
    NSOrderedSet *_featureEncoding;
}

+ (id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(_Bool)arg3 handleUnknown:(_Bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool handleUnknown; // @synthesize handleUnknown=_handleUnknown;
@property(readonly, nonatomic) _Bool ouputSparse; // @synthesize ouputSparse=_ouputSparse;
@property(readonly, nonatomic) NSOrderedSet *featureEncoding; // @synthesize featureEncoding=_featureEncoding;
- (void).cxx_destruct;
- (id)encodeFeatureValueIntString:(unsigned long long)arg1;
- (id)unknownDenseVector;
- (id)encodeFeatureValue:(id)arg1;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(_Bool)arg3 handleUnknown:(_Bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;

// Remaining properties
@property(readonly) MLModelInterface *interface;
@property(readonly) MLModelMetadata *metadata;
@property(readonly, nonatomic) MLModelDescription *modelDescription;

@end

