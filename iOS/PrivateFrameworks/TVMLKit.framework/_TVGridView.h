//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TVCollectionViewFlowLayout;

@interface _TVGridView
{
    _Bool _delegateRespondsToIndexPathForPreferredFocusedView;
    _TVCollectionViewFlowLayout *_gridFlowLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout; // @synthesize gridFlowLayout=_gridFlowLayout;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
