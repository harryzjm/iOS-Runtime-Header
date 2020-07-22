//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    _Bool _isEnabled;
    _Bool _isUpdating;
    _Bool _isHeadingEnabled;
}

+ (id)sharedInstance;
+ (void)setUsesEffectiveBundleIdentifier:(_Bool)arg1;
+ (_Bool)usesEffectiveBundleIdentifier;
- (void)_assetContainerChanged:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(_Bool)arg3;
- (_Bool)_addLocationToAsset:(id)arg1;
- (id)locationString;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(_Bool)arg2;
- (id)location;
- (void)_stopUpdating;
- (void)_startUpdating;
- (void)setHeadingEnabled:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_applicationStateChanged:(id)arg1;
- (void)_updateLocationRunState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
