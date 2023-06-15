//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILayoutGuide.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UITraitCollection, UIView;

@interface UILayoutGuide (StatusBarAdditions_Internal)
@property(readonly, nonatomic) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)_ui_removeFromParentLayoutItem;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
@property(nonatomic) _Bool _ui_usesManualLayout;
@property(readonly, nonatomic) UIView *_ui_view;
@property(readonly, nonatomic) UIView *_ui_superview;
@property(nonatomic) struct CGRect _ui_frame;
@property(readonly, nonatomic) struct CGRect _ui_bounds;

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end

