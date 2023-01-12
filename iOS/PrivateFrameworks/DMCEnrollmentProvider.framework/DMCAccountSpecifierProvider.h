//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol DMCAccountSpecifierProviderDelegate, OS_dispatch_queue;

@interface DMCAccountSpecifierProvider : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_updateQueue;
    id <DMCAccountSpecifierProviderDelegate> _delegate;
}

+ (id)itemSpecifierIDForReauthAccountUsername:(id)arg1;
+ (id)itemSpecifierIDForAccountUsername:(id)arg1;
+ (id)itemSpecifierIDPrefix;
+ (id)groupSpecifierID;
- (void).cxx_destruct;
@property(nonatomic) __weak id <DMCAccountSpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_accountCellWasTappedWithSpecifier:(id)arg1;
- (id)_reauthSpecifierForAccount:(id)arg1;
- (id)_specifierForManagedAccount:(id)arg1;
- (id)_specifierForManagedAccountGroupWithTitle:(_Bool)arg1 plural:(_Bool)arg2;
- (id)specifiersWithTitle:(_Bool)arg1;
- (void)specifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)appleAccountsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithAccountStore:(id)arg1;

@end
