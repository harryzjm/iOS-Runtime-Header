//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface-Protocol.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface>
{
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (_Bool)_selectorIsOverriden:(SEL)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1;
- (void)handleButtonActions:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

