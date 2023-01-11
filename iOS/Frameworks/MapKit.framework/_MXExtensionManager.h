//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MXExtensionProvider;
@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;

@interface _MXExtensionManager : NSObject
{
    id <_MXExtensionLookupPolicy> _lookupPolicy;
    id _matchingContext;
    id <_MXExtensionManagerDelegate> _delegate;
    _MXExtensionProvider *_extensionProvider;
}

+ (id)_lookupPolicyWithBlock:(CDUnknownBlockType)arg1;
+ (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForUIExtension;
+ (id)_extensionsWithLookupPolicy:(id)arg1;
+ (id)_queue;
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;
+ (id)lookupPolicyForRideSharingExtensions;
+ (void)_maps_updateRideBookingExtensions:(id)arg1;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)restaurantQueueingIntentClassNames;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)restaurantReservationIntentClassNames;
@property(retain, nonatomic) _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
@property(nonatomic) __weak id <_MXExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(readonly, nonatomic) id <_MXExtensionLookupPolicy> lookupPolicy; // @synthesize lookupPolicy=_lookupPolicy;
- (void).cxx_destruct;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;

@end

