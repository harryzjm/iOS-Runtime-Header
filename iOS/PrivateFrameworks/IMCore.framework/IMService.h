//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMService : NSObject
{
}

+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (unsigned long long)statusForABPerson:(id)arg1;
+ (unsigned long long)statusForIMPerson:(id)arg1;
+ (_Bool)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)smsService;
+ (id)iMessageService;
+ (id)facetimeService;
+ (id)callService;
+ (id)jabberService;
+ (id)subnetService;
+ (id)aimService;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (unsigned long long)status;
- (id)name;
- (id)localizedShortName;
- (id)localizedName;
- (_Bool)initialSyncPerformed;
- (void)logout;
- (void)login;
- (_Bool)isEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)infoForDisplayedPeople;
- (id)infoForAllPeople;
- (id)infoForPerson:(id)arg1;

@end

