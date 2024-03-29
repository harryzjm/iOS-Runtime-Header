//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPVerticalTextStackViewStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackView
{
    NSMutableArray *_items;
    _Bool _hasEverBuilt;
    struct UIEdgeInsets _contentInset;
    LPVerticalTextStackViewStyle *_style;
}

- (void).cxx_destruct;
- (struct CGSize)_layoutTextStackForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (long long)computedNumberOfLines;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (void)addArrangedSubview:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithHost:(id)arg1 style:(id)arg2;
- (id)initWithHost:(id)arg1;

@end

