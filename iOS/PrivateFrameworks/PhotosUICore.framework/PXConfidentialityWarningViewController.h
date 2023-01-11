//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIVisualEffectView;

@interface PXConfidentialityWarningViewController : UIViewController
{
    CDUnknownBlockType _cancellationHandler;
    UIVisualEffectView *_effectView;
    UILabel *_messageLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void)_handleButton:(id)arg1;
- (void)presentAsOverlayInWindowScene:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end
