//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactStore, NSString;
@protocol CNContactSharedProfileSettingsActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactSharedProfileSettingsAction : CNContactAction
{
    CNContactStore *_contactStore;
    id <CNContactSharedProfileSettingsActionDelegate> _sharedProfileSettingsActionDelegate;
}

+ (id)os_log;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CNContactSharedProfileSettingsActionDelegate> sharedProfileSettingsActionDelegate; // @synthesize sharedProfileSettingsActionDelegate=_sharedProfileSettingsActionDelegate;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(_Bool)arg2;
- (id)meContact;
- (void)presentSharingSettingsWithNicknameContact:(id)arg1 sender:(id)arg2;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

