//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject
{
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)ephemeralSecIdentityPreferencesController;
+ (id)sharedPersistentSecIdentityPreferencesController;
- (void).cxx_destruct;
- (id)_initUsingEphemeralStorage:(_Bool)arg1;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(_Bool)arg1 forDomainAndPort:(id)arg2;
- (_Bool)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1;

@end
