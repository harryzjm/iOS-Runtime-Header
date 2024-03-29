//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class FTRegConnectionHandler, IMAccount;

__attribute__((visibility("hidden")))
@interface CNFInternalAccountViewController : PSListController
{
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (id)accountIsActive:(id)arg1;
- (id)registrationFailureReason:(id)arg1;
- (id)accountDisplayName:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (id)accountType:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (_Bool)isConnectedToDaemon;
- (id)specifierForAlias:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)bundle;
- (id)specifiers;
- (id)initWithAccount:(id)arg1;

@end

