//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafariUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <MobileSafariUI/_SFSettingsAlertStepperConfiguration-Protocol.h>

@class NSString, SFStepperView;
@protocol _SFSettingsAlertStepperController;

__attribute__((visibility("hidden")))
@interface StepperViewController : UIViewController <_SFSettingsAlertStepperConfiguration, UIViewControllerTransitioningDelegate>
{
    SFStepperView *_stepperView;
    id <_SFSettingsAlertStepperController> _stepperController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_SFSettingsAlertStepperController> stepperController; // @synthesize stepperController=_stepperController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setEnabled:(_Bool)arg1 forButton:(long long)arg2;
- (void)setText:(id)arg1 forButton:(long long)arg2;
- (void)setImage:(id)arg1 forButton:(long long)arg2;
- (id)_buttonForStepperButton:(long long)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStepperController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
