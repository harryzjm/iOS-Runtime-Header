//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface ARLightEstimate : NSObject
{
    double _ambientIntensity;
    double _ambientColorTemperature;
}

@property(readonly, nonatomic) double ambientColorTemperature; // @synthesize ambientColorTemperature=_ambientColorTemperature;
@property(readonly, nonatomic) double ambientIntensity; // @synthesize ambientIntensity=_ambientIntensity;
- (id)description;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2;

@end

