//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CPSAppStoreButton
{
    UIStackView *_fullSizeStack;
    UIStackView *_glyphOnlyStack;
    UILabel *_label;
    struct CGRect _lastLayoutBounds;
    _Bool _intrinsicContentSizeIsValid;
    struct CGSize _intrinsicContentSize;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
