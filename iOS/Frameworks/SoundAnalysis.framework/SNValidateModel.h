//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNValidateModel : NSObject
{
}

+ (_Bool)ensureModelDescription:(id)arg1 hasInputFeatureNames:(id)arg2 hasOutputFeatureNames:(id)arg3 error:(id *)arg4;
+ (_Bool)ensureFeatureWithDescription:(id)arg1 isOptional:(_Bool)arg2 isFreelyShapedMultiArrayWithDataType:(long long)arg3 error:(id *)arg4;
+ (_Bool)ensureFeatureWithDescription:(id)arg1 isOptional:(_Bool)arg2 isMultiArrayWithDataType:(long long)arg3 shapeOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)ensureFeatureWithDescription:(id)arg1 isOptional:(_Bool)arg2 isMultiArrayWithDataType:(long long)arg3 dimensionSizeRanges:(id)arg4 error:(id *)arg5;
+ (_Bool)ensureMultiArrayIsFreelyShapedWithConstraint:(id)arg1 hasDataType:(long long)arg2 error:(id *)arg3;
+ (_Bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 andShapeOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 andDimensionSizeRanges:(id)arg3 error:(id *)arg4;
+ (_Bool)ensureMultiArrayIsRequiredByFeatureDescription:(id)arg1 error:(id *)arg2;
+ (_Bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 error:(id *)arg3;
+ (_Bool)ensureMultiArrayIsFreelyShapedByShapeConstraint:(id)arg1 error:(id *)arg2;
+ (_Bool)ensureMultiArrayShapeConstraint:(id)arg1 hasShapeOptions:(id)arg2 error:(id *)arg3;
+ (_Bool)ensureMultiArrayShapeConstraint:(id)arg1 hasDimensionSizeRanges:(id)arg2 error:(id *)arg3;
+ (_Bool)ensureFeatureWithDescription:(id)arg1 isOptional:(_Bool)arg2 error:(id *)arg3;
- (id)init;

@end

