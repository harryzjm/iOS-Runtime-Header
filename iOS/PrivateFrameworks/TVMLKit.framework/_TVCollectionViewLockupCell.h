//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell
{
    _Bool _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> *__selectingView;
    _Bool _unpressOnEndAnimating;
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;
    id <TVCollectionViewLockupCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TVCollectionViewLockupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;
- (void)_showPressState;
- (void)_handleSelect;
- (id)_selectingView;
- (void)_clearPressState;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (_Bool)_descendantsShouldHighlight;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)layeredImageContainerLayer;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)selectingView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

