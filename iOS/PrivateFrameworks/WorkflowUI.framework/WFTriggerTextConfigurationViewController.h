//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UITextField;
@protocol WFTriggerTextConfigurationViewControllerDelegate;

@interface WFTriggerTextConfigurationViewController : UIViewController
{
    id <WFTriggerTextConfigurationViewControllerDelegate> _delegate;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <WFTriggerTextConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
