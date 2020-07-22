//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TVShelfViewLayout;

@interface _TVShelfView
{
    _TVShelfViewLayout *_shelfFlowLayout;
}

@property(retain, nonatomic) _TVShelfViewLayout *shelfFlowLayout; // @synthesize shelfFlowLayout=_shelfFlowLayout;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;
- (struct UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1;
- (void)updateLayoutForFocusedView:(id)arg1;
- (struct CGRect)tv_augmentedSelectionFrameForFrame:(struct CGRect)arg1;
- (void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;

@end
