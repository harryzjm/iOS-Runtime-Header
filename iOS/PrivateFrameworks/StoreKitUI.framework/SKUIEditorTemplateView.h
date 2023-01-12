//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UITextView;
@protocol SKUIEditorTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEditorTemplateView
{
    UIColor *_textColor;
    UITextView *_textView;
    struct CGRect _keyboardFrame;
    _Bool _disabled;
    double _bottomInset;
    id <SKUIEditorTemplateViewDelegate> _delegate;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUIEditorTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
- (id)_textFromViewElement:(id)arg1;
- (void)_reloadSubviews;
@property(readonly, nonatomic) NSString *text;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)arg1;
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

