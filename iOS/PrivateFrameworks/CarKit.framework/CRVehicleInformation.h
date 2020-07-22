//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVExternalDevice;

@interface CRVehicleInformation : NSObject
{
    int _mapsAmbientBrightnessNotifyToken;
    AVExternalDevice *_externalDevice;
    unsigned long long _mapsFallbackAmbientBrightness;
}

@property(nonatomic) unsigned long long mapsFallbackAmbientBrightness; // @synthesize mapsFallbackAmbientBrightness=_mapsFallbackAmbientBrightness;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
- (void).cxx_destruct;
- (void)_handleNightModeChanged:(id)arg1;
- (void)_handleLimitedUIChanged:(id)arg1;
@property(readonly, nonatomic) unsigned long long vehicleAmbientBrightness;
@property(readonly, nonatomic) unsigned long long interactionRestrictions;
@property(readonly, nonatomic) unsigned long long driverPosition;
- (void)_fetchMapsFallbackAmbientBrightnessWithToken:(int)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
