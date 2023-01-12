//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SKUIPanelView
{
    NSMapTable *_animators;
    UIResponder *_inputResponder;
    NSMapTable *_viewElements;
    NSMapTable *_viewMargins;
}

+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (_Bool)_shouldDisplayViewElement:(id)arg1;
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;
+ (_Bool)_isValidTextInputViewElement:(id)arg1;
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

