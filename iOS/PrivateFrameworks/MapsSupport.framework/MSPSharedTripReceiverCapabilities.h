//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MSPSharedTripReceiverCapabilities : NSObject
{
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}

+ (void)fetchReceiverCapabilitiesForDestinations:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)enumerateReceiverCapabilityConfigurations:(id)arg1 forState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)enumerateKnownReceiverCapabilityConfigurationsForState:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)unrestrictedReceiverCapabilities;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)allKnownReceiverCapabilities;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsWaypointRouteSharing;
@property(readonly, nonatomic) _Bool supportsRoutingPathLeg;
- (id)description;
- (id)idsSendMessageOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIDSEndpointCapabilities:(id)arg1;
- (id)initWithRegistrationPropertiesSupported:(id)arg1 propertiesUnsupported:(id)arg2;

@end

