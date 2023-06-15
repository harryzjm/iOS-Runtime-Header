//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, SUUIImageViewElement, SUUIPlayButton;

__attribute__((visibility("hidden")))
@interface SUUIAdornedImageViewReuseView
{
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUUIImageViewElement *_imageViewElement;
    SUUIPlayButton *_playButton;
    unsigned long long _playButtonPosition;
    NSMapTable *_viewElementViews;
}

+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIPlayButton *playButton; // @synthesize playButton=_playButton;
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)frameForView:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

