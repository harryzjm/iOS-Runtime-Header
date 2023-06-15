//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, SKAccountPageViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteAccountPageViewController : _UIRemoteViewController
{
    SKAccountPageViewController *_accountPageViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak SKAccountPageViewController *accountPageViewController; // @synthesize accountPageViewController=_accountPageViewController;
- (id)disconnect;
- (void)dismissBridgedViewController;
- (void)presentBridgedViewController;
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)setBridgedNavigationItemWithOptions:(id)arg1;
- (void)overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)financeInterruptionResolved:(_Bool)arg1;
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishLoading;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

