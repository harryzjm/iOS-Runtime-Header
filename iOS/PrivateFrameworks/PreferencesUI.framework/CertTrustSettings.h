//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@interface CertTrustSettings : PSListController
{
    id _profileListChangedNotificationObserver;
}

@property(retain, nonatomic) id profileListChangedNotificationObserver; // @synthesize profileListChangedNotificationObserver=_profileListChangedNotificationObserver;
- (void).cxx_destruct;
- (id)trustVersionString:(id)arg1;
- (id)specifierForTrustSettings:(struct __SecCertificate *)arg1 isRestricted:(_Bool)arg2;
- (void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)isFullTrustEnabled:(id)arg1;
- (id)specifiers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end
