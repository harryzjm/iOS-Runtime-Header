//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGFeatureTransformerAddScalar
{
    float _scalarToAdd;
}

+ (id)instanceWithParameters:(id)arg1 error:(id *)arg2;
+ (id)name;
@property(readonly, nonatomic) float scalarToAdd; // @synthesize scalarToAdd=_scalarToAdd;
- (id)applyTransformationToFloatVector:(id)arg1 error:(id *)arg2;
- (id)initWithScalarToAdd:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (id)initWithScalarToAdd:(float)arg1;

@end
