//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNStarkActionView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CNStarkContactAddressPropertyCell
{
    CNStarkActionView *_actionView;
    NSLayoutConstraint *_labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_valueViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint; // @synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint; // @synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint;
@property(readonly, nonatomic) CNStarkActionView *actionView; // @synthesize actionView=_actionView;
- (void)actionViewTapped:(id)arg1;
- (void)updateTransportButtons;
- (_Bool)shouldShowStar;
- (void)performDefaultAction;
- (_Bool)supportsValueColorUsesLabelColor;
- (_Bool)supportsTintColorValue;
- (void)setSeparatorStyle:(long long)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)_cnui_applyContactStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

