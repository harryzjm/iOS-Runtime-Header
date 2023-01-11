//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate, HKHealthPrivacyServiceRemoteAuthorizationViewController;

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id <HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HKHealthPrivacyHostAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
@property(readonly, nonatomic) id <HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy;
- (void)didFinishWithError:(id)arg1;
- (void)show;
- (void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2;

@end
