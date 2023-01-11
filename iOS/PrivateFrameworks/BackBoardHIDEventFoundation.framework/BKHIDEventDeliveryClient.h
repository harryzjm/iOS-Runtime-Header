//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString;

@interface BKHIDEventDeliveryClient
{
    NSString *_bundleIdentifier;
    NSArray *_deliveryRoots;
    NSArray *_keyCommandDeliveryRoots;
    NSArray *_deferringRules;
    NSSet *_keyCommandsRegistrations;
    NSSet *_resolutions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *resolutions; // @synthesize resolutions=_resolutions;
@property(retain, nonatomic) NSSet *keyCommandsRegistrations; // @synthesize keyCommandsRegistrations=_keyCommandsRegistrations;
@property(retain, nonatomic) NSArray *deferringRules; // @synthesize deferringRules=_deferringRules;
@property(retain, nonatomic) NSArray *keyCommandDeliveryRoots; // @synthesize keyCommandDeliveryRoots=_keyCommandDeliveryRoots;
@property(retain, nonatomic) NSArray *deliveryRoots; // @synthesize deliveryRoots=_deliveryRoots;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end
