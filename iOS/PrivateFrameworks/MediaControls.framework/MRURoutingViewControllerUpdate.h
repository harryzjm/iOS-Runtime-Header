//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MRURoutingViewControllerUpdate : NSObject
{
    _Bool _canGroup;
    _Bool _hasPendingPickedRoutes;
    _Bool _shouldReload;
    NSArray *_pickedRoutes;
    NSArray *_pendingPickedRoutes;
    NSArray *_displayableAvailableRoutes;
    NSArray *_displayAsPickedRoutes;
    NSArray *_volumeCapableRoutes;
    NSArray *_airPlayRoutes;
    NSArray *_nativeRoutes;
    NSArray *_nativeRoutesInVendorSpecificGroup;
    NSArray *_activatedVendorSpecificDeviceIDs;
    NSArray *_pendingVendorSpecificDeviceIDs;
    NSArray *_availableVendorSpecificDeviceIDs;
    NSDictionary *_routeGrouping;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(nonatomic) _Bool canGroup; // @synthesize canGroup=_canGroup;
@property(copy, nonatomic) NSDictionary *routeGrouping; // @synthesize routeGrouping=_routeGrouping;
@property(copy, nonatomic) NSArray *availableVendorSpecificDeviceIDs; // @synthesize availableVendorSpecificDeviceIDs=_availableVendorSpecificDeviceIDs;
@property(copy, nonatomic) NSArray *pendingVendorSpecificDeviceIDs; // @synthesize pendingVendorSpecificDeviceIDs=_pendingVendorSpecificDeviceIDs;
@property(copy, nonatomic) NSArray *activatedVendorSpecificDeviceIDs; // @synthesize activatedVendorSpecificDeviceIDs=_activatedVendorSpecificDeviceIDs;
@property(copy, nonatomic) NSArray *nativeRoutesInVendorSpecificGroup; // @synthesize nativeRoutesInVendorSpecificGroup=_nativeRoutesInVendorSpecificGroup;
@property(copy, nonatomic) NSArray *nativeRoutes; // @synthesize nativeRoutes=_nativeRoutes;
@property(copy, nonatomic) NSArray *airPlayRoutes; // @synthesize airPlayRoutes=_airPlayRoutes;
@property(copy, nonatomic) NSArray *volumeCapableRoutes; // @synthesize volumeCapableRoutes=_volumeCapableRoutes;
@property(copy, nonatomic) NSArray *displayAsPickedRoutes; // @synthesize displayAsPickedRoutes=_displayAsPickedRoutes;
@property(copy, nonatomic) NSArray *displayableAvailableRoutes; // @synthesize displayableAvailableRoutes=_displayableAvailableRoutes;
@property(copy, nonatomic) NSArray *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property(copy, nonatomic) NSArray *pickedRoutes; // @synthesize pickedRoutes=_pickedRoutes;

@end

