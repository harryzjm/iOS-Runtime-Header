//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UISwitch;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;

@interface _PXFeedbackTapToRadarViewController : UIViewController
{
    UISwitch *_screenshotSwitch;
    id <_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) id <_PXFeedbackTapToRadarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *screenshotSwitch; // @synthesize screenshotSwitch=_screenshotSwitch;
- (void).cxx_destruct;
- (void)_didSelectFileRadarButton:(id)arg1;
- (void)_didSelectCancelButton:(id)arg1;
- (void)viewDidLoad;

@end
