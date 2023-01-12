//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

