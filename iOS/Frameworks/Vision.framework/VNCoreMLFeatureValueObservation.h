//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLFeatureValue;

@interface VNCoreMLFeatureValueObservation
{
    MLFeatureValue *_featureValue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MLFeatureValue *featureValue; // @synthesize featureValue=_featureValue;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureValue:(id)arg1;

@end
