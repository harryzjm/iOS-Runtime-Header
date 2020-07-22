//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLTexture, NSData, NSMutableData;

@interface MDLPhotometricLight
{
    struct RTIESLight *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
    MDLTexture *_lightCubeMap;
    unsigned long long _sphericalHarmonicsLevel;
}

@property(readonly, nonatomic) unsigned long long sphericalHarmonicsLevel; // @synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel;
@property(readonly, retain, nonatomic) MDLTexture *lightCubeMap; // @synthesize lightCubeMap=_lightCubeMap;
- (void).cxx_destruct;
- (struct CGColor *)evaluatedColorFromSHVector: /* Error: Ran out of types for this method. */;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (id)computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (id)generateTexture:(unsigned long long)arg1;
- (float)computeInnerAngle;
- (void)computeLumens;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (id)initWithIESProfile:(id)arg1;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

@end

