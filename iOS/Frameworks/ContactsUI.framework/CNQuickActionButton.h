//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNQuickAction, NSArray, UIButton, UILabel;
@protocol CNQuickActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickActionButton : UIView
{
    _Bool _showTitle;
    _Bool _showBackgroundPlatter;
    CNQuickAction *_action;
    id <CNQuickActionButtonDelegate> _delegate;
    UIButton *_button;
    UILabel *_label;
    NSArray *_activatedConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <CNQuickActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBackgroundPlatter; // @synthesize showBackgroundPlatter=_showBackgroundPlatter;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) CNQuickAction *action; // @synthesize action=_action;
- (void)onLongPress:(id)arg1;
- (void)performAction;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

