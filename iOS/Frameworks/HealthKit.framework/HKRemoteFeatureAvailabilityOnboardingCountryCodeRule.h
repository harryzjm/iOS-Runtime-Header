//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityOnboardingCountryCodeRule
{
    NSString *_onboardingCountryCode;
}

+ (id)ruleIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *onboardingCountryCode; // @synthesize onboardingCountryCode=_onboardingCountryCode;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

