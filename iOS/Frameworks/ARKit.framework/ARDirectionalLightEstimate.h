//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSData;

@interface ARDirectionalLightEstimate <NSCopying>
{
    CDStruct_9c26ff66 _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    double _confidenceRating;
    MISSING_TYPE *_primaryLightDirection;
}

@property(nonatomic) double confidenceRating; // @synthesize confidenceRating=_confidenceRating;
@property(readonly, nonatomic) double primaryLightIntensity; // @synthesize primaryLightIntensity=_primaryLightIntensity;
@property(readonly, nonatomic) MISSING_TYPE *primaryLightDirection; // @synthesize primaryLightDirection=_primaryLightDirection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(CDStruct_9c26ff66)arg1 temperature:(double)arg2;

@end
