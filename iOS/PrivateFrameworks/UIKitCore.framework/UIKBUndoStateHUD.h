//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIKBUndoStyling, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBUndoStateHUD : UIView
{
    long long _controlType;
    NSLayoutConstraint *_undoStateHUDWidthConstraint;
    NSLayoutConstraint *_undoStateHUDHeightConstraint;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UILabel *_labelView;
    UIKBUndoStyling *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIVisualEffectView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) NSLayoutConstraint *undoStateHUDHeightConstraint; // @synthesize undoStateHUDHeightConstraint=_undoStateHUDHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoStateHUDWidthConstraint; // @synthesize undoStateHUDWidthConstraint=_undoStateHUDWidthConstraint;
@property(nonatomic) long long controlType; // @synthesize controlType=_controlType;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUndoStateHUDControlType:(long long)arg1 available:(_Bool)arg2;
- (id)initWithKeyboardAppearance:(long long)arg1;

@end

