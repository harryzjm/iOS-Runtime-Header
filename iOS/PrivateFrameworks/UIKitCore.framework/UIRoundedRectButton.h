//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton
{
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
    UIGroupTableViewCellBackground *_tableViewStyleBackground;
    UIView *_shadowView;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (long long)buttonType;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_invalidatePaths;
- (void)_invalidateBackingViews;
- (void)_updateState;
- (id)_backgroundView;
- (id)_setupBackgroundView;
- (_Bool)_wantsTableViewStyleBackground;
- (id)_contentBackgroundColor;
- (_Bool)_canDrawContent;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonRoundedRectButtonInit;

@end
