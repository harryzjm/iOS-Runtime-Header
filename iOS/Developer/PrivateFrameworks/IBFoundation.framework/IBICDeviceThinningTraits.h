//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IBICDeviceThinningTraits : NSObject <IBBinaryArchiving, NSCopying>
{
    NSString *_productType;
    NSString *_artworkDeviceIdiom;
    long long _artworkDeviceScaleFactor;
    long long _artworkDeviceSubtype;
    long long _devicePerformanceMemoryClass;
    NSString *_deviceGraphicsFeatureSetClass;
    NSArray *_deviceGraphicsFeatureSetFallbacks;
    NSArray *_artworkHostedIdioms;
    NSString *_displayGamut;
    NSString *_artworkDynamicDisplayMode;
    NSString *_deploymentTargetVersion;
}

@property(readonly) NSString *deploymentTargetVersion; // @synthesize deploymentTargetVersion=_deploymentTargetVersion;
@property(readonly) NSString *artworkDynamicDisplayMode; // @synthesize artworkDynamicDisplayMode=_artworkDynamicDisplayMode;
@property(readonly) NSString *displayGamut; // @synthesize displayGamut=_displayGamut;
@property(readonly) NSArray *artworkHostedIdioms; // @synthesize artworkHostedIdioms=_artworkHostedIdioms;
@property(readonly) NSArray *deviceGraphicsFeatureSetFallbacks; // @synthesize deviceGraphicsFeatureSetFallbacks=_deviceGraphicsFeatureSetFallbacks;
@property(readonly) NSString *deviceGraphicsFeatureSetClass; // @synthesize deviceGraphicsFeatureSetClass=_deviceGraphicsFeatureSetClass;
@property(readonly) long long devicePerformanceMemoryClass; // @synthesize devicePerformanceMemoryClass=_devicePerformanceMemoryClass;
@property(readonly) long long artworkDeviceSubtype; // @synthesize artworkDeviceSubtype=_artworkDeviceSubtype;
@property(readonly) long long artworkDeviceScaleFactor; // @synthesize artworkDeviceScaleFactor=_artworkDeviceScaleFactor;
@property(readonly) NSString *artworkDeviceIdiom; // @synthesize artworkDeviceIdiom=_artworkDeviceIdiom;
@property(readonly) NSString *productType; // @synthesize productType=_productType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithProductType:(id)arg1 artworkDeviceIdiom:(id)arg2 artworkDeviceScaleFactor:(long long)arg3 artworkDeviceSubtype:(long long)arg4 devicePerformanceMemoryClass:(long long)arg5 deviceGraphicsFeatureSetClass:(id)arg6 deviceGraphicsFeatureSetFallbacks:(id)arg7 artworkHostedIdioms:(id)arg8 displayGamut:(id)arg9 artworkDynamicDisplayMode:(id)arg10 deploymentTargetVersion:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

