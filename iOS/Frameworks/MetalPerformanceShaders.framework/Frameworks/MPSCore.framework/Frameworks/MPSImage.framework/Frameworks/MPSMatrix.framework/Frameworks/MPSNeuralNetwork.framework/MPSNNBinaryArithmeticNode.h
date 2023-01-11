//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSNNBinaryArithmeticNode
{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _primaryStrideInFeatureChannels;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _secondaryStrideInFeatureChannels;
    float _minimumValue;
    float _maximumValue;
}

+ (id)nodeWithLeftSource:(id)arg1 rightSource:(id)arg2;
+ (id)nodeWithSources:(id)arg1;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) unsigned long long secondaryStrideInFeatureChannels; // @synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels;
@property(nonatomic) unsigned long long secondaryStrideInPixelsY; // @synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY;
@property(nonatomic) unsigned long long secondaryStrideInPixelsX; // @synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX;
@property(nonatomic) unsigned long long primaryStrideInFeatureChannels; // @synthesize primaryStrideInFeatureChannels=_primaryStrideInFeatureChannels;
@property(nonatomic) unsigned long long primaryStrideInPixelsY; // @synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY;
@property(nonatomic) unsigned long long primaryStrideInPixelsX; // @synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX;
@property(nonatomic) float bias; // @synthesize bias=_bias;
@property(nonatomic) float secondaryScale; // @synthesize secondaryScale=_secondaryScale;
@property(nonatomic) float primaryScale; // @synthesize primaryScale=_primaryScale;
- (Class)gradientClass;
- (id)gradientFiltersWithSources:(id)arg1;
- (id)gradientFilterWithSources:(id)arg1;
- (id)initWithLeftSource:(id)arg1 rightSource:(id)arg2;
- (id)initWithSources:(id)arg1;

@end

