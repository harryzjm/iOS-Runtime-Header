//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _deviceType;
    long long _device;
    long long _renderer;
}

+ (void)setCurrentCapabilitiesOverride:(id)arg1;
+ (id)currentCapabilitiesOverride;
+ (id)currentCapabilities;
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) _Bool isMetalCapable;
- (_Bool)p_isMetalCapable;
- (struct CGSize)maximumMetalTextureSizeForDevice:(id)arg1;
@property(readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;
@property(readonly, nonatomic) struct CGSize maximumTextureSize;
@property(readonly, nonatomic) _Bool hasLightningPort;
@property(readonly, nonatomic) _Bool isRendererH5OrBelow;
@property(readonly, nonatomic) _Bool isRendererH4OrBelow;
@property(readonly, nonatomic) _Bool isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end
