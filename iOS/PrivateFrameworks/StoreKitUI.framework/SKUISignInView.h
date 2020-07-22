//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SKUIShapeView, SKUIViewElement, UIColor;
@protocol SKUISignInViewDelegate;

@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView>
{
    UIColor *_borderColor;
    SKUIShapeView *_borderView;
    NSMutableArray *_labels;
    NSMutableArray *_textFields;
    SKUIViewElement *_viewElement;
    NSMapTable *_viewFontDescriptors;
    id <SKUISignInViewDelegate> _delegate;
}

+ (id)_textFieldWithViewElement:(id)arg1;
+ (id)_labelWithViewElement:(id)arg1;
+ (id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(_Bool)arg3;
+ (id)_borderPathWithSize:(struct CGSize)arg1;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) __weak id <SKUISignInViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_layoutTextFieldsOffsetX:(double)arg1;
- (double)_layoutLabels;
- (void)_clearFieldsAndLabels;
- (id)_applePasswordText;
- (id)_accountNameText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

