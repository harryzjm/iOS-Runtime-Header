//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSBundleController.h>

@class CTXPCServiceSubscriptionContext, NSArray, NSOrderedSet, PSListController, TPSTelephonyController;

@interface TPSBundleController : PSBundleController
{
    TPSTelephonyController *_telephonyController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSArray *_specifiers;
}

@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property(readonly, nonatomic) TPSTelephonyController *telephonyController; // @synthesize telephonyController=_telephonyController;
- (void).cxx_destruct;
- (void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2;
- (id)subscriptionContextForSpecifier:(id)arg1;
- (id)specifiersWithSpecifier:(id)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *subscriptions;
@property(readonly, nonatomic) __weak PSListController *parentListController;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (id)initWithParentListController:(id)arg1;

@end

