//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellEditControl.h"

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
{
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldHandlePressEvent:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)wantsImageShadow;
- (_Bool)wantsMaskingWhileAnimatingDisabled;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)_currentImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (void)_ensureFocusedFloatingContentView;

@end

