//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfile;
@protocol MCInstallationConsentDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallationConsentViewController
{
    _Bool _showInstall;
    MCProfile *_profile;
    id <MCInstallationConsentDelegate> _consentDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showInstall; // @synthesize showInstall=_showInstall;
@property(nonatomic) __weak id <MCInstallationConsentDelegate> consentDelegate; // @synthesize consentDelegate=_consentDelegate;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_installProfile;
- (void)_cancelInstallProfile;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;

@end
