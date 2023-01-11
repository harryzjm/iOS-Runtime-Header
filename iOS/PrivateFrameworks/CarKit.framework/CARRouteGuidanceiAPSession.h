//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarKit/IAPNavigationDelegate-Protocol.h>

@class IAPNavigation, NSMapTable, NSString;

@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate>
{
    NSString *_currentNavigationOwnerIdentifier;
    IAPNavigation *_iapNavigation;
    NSMapTable *_navigationAccessories;
}

+ (id)localizedNameForIdentifier:(id)arg1;
@property(retain, nonatomic) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property(retain, nonatomic) IAPNavigation *iapNavigation; // @synthesize iapNavigation=_iapNavigation;
@property(retain, nonatomic) NSString *currentNavigationOwnerIdentifier; // @synthesize currentNavigationOwnerIdentifier=_currentNavigationOwnerIdentifier;
- (void).cxx_destruct;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1;
- (void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2;
- (void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg1;
- (void)updateNavigationGuidanceInfo;
- (void)_setupiAPNavigation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

