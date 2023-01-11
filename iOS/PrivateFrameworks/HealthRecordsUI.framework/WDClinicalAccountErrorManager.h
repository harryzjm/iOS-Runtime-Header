//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFSafariViewController;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountErrorManager : NSObject
{
    SFSafariViewController *_activeLoginViewController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak SFSafariViewController *activeLoginViewController; // @synthesize activeLoginViewController=_activeLoginViewController;
- (void).cxx_destruct;
- (void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1;
- (void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;
- (void)_dismissReloginViewController:(id)arg1;
- (void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;

@end
