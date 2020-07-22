//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SKUINavigationBarMenusView
{
    SEL _buttonAction;
    id _buttonTarget;
    struct UIEdgeInsets _contentInset;
    NSArray *_menuViewElements;
}

+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
+ (void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;

@end

