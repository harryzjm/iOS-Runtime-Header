//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AAUISpecifierProvider-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class AIDAAccountManager, NSArray, NSString, PSSpecifier;
@protocol AAUISpecifierProviderDelegate;

@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate>
{
    id <AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
    AIDAAccountManager *_accountManager;
    PSSpecifier *_activelyLoadingSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *activelyLoadingSpecifier; // @synthesize activelyLoadingSpecifier=_activelyLoadingSpecifier;
@property(retain, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_findViewController;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_subscriptionsSpecifierWasTapped:(id)arg1;
- (id)_storeAccount;
- (id)_appleAccount;
- (_Bool)_isSingleIdentity;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
