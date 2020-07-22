//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <AccountsUI/ACUISetupViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate>
{
    NSString *_filteredDataclass;
}

- (void).cxx_destruct;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)_specifiersForOtherServerAccounts;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherMailAccounts;
- (id)specifiers;
- (id)_viewProvidersManager;
- (void)setSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

