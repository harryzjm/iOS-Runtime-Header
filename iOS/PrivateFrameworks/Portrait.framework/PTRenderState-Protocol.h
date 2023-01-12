//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Portrait/NSObject-Protocol.h>

@class MISSING_TYPE;

@protocol PTRenderState <NSObject>
@property(nonatomic) int hwModelID;
@property(nonatomic) float networkBias;
@property(nonatomic) unsigned long long renderingVersion;
@property(nonatomic) int sourceColorBitDepth;
@property(nonatomic) struct CGRect totalSensorCrop;
@property(nonatomic) int sensorID;
@property(nonatomic) MISSING_TYPE *visCropFactor;
@property(nonatomic) int rawSensorWidth;
@property(nonatomic) int rawSensorHeight;
@property(nonatomic) float noiseScaleFactor;
@property(nonatomic) int readNoise_8x;
@property(nonatomic) int readNoise_1x;
@property(nonatomic) int conversionGain;
@property(nonatomic) float focalLenIn35mmFilm;
@property(readonly) int quality;
- (_Bool)prepareForRendering;
- (_Bool)prepareForRendering:(_Bool)arg1;
@end

