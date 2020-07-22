//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKUIDividedGridViewController, NSLayoutConstraint, UIColor, UITextLabel;

@interface EKUIDividedGridViewCell : UIView
{
    UIColor *_bgColor;
    _Bool _selected;
    UITextLabel *_label;
    EKUIDividedGridViewController *_viewController;
    NSLayoutConstraint *_widthConstraint;
}

@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak EKUIDividedGridViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain) UITextLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithBackgroundColor:(id)arg1;

@end

