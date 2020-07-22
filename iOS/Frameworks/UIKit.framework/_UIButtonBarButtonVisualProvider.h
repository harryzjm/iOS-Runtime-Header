//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>
{
}

- (struct UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1;
- (struct CGSize)buttonIntrinsicContentSize:(id)arg1;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)buttonWillMoveToSuperview:(id)arg1;
- (void)buttonWillMoveToWindow:(id)arg1;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (_Bool)buttonEnabledState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonHighlitedState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;
@property(nonatomic) _Bool backButtonConstraintsActive;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIView *backIndicatorView;
- (_Bool)supportsBackButtons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

