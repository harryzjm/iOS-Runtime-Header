//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class _UIContextMenuCellContentView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCell : UICollectionViewCell
{
    _UIFloatingContentView *_floatingContentView;
}

+ (_Bool)_wantsLegacyMenuGesture;
+ (_Bool)_isInternalCell;
+ (Class)_contentViewClass;
- (void).cxx_destruct;
- (void)_portalActionViewToFloatingContentView;
- (void)_buildFloatingContentView;
- (void)_wrapContentInFloatingContentView;
- (void)_updateStateWithAnimationCoordinator:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_allowsHorizontalFocusMovement;
- (_Bool)_wantsKeyCommandsWhenDeferred;
- (long long)_focusItemDeferralMode;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)prepareForReuse;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 forHover:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
@property(readonly, nonatomic) _UIContextMenuCellContentView *actionView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

