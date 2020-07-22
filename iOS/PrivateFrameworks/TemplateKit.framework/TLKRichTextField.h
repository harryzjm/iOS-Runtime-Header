//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>
#import <TemplateKit/TLKObservable-Protocol.h>

@class NSString, TLKEmojiableVibrantLabel, TLKIconsView, TLKObserver, TLKRichText, TLKRoundedCornerLabels, TLKStarsView;

@interface TLKRichTextField <TLKObservable, NUIContainerStackViewDelegate>
{
    TLKRichText *_richText;
    TLKEmojiableVibrantLabel *_textLabel;
    TLKObserver *_richTextObserver;
    TLKRoundedCornerLabels *_roundedCornerLabels;
    TLKStarsView *_starRatingView;
    TLKIconsView *_iconView;
}

+ (id)font;
@property(retain) TLKIconsView *iconView; // @synthesize iconView=_iconView;
@property(retain) TLKStarsView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain) TLKRoundedCornerLabels *roundedCornerLabels; // @synthesize roundedCornerLabels=_roundedCornerLabels;
@property(retain) TLKObserver *richTextObserver; // @synthesize richTextObserver=_richTextObserver;
@property(retain) TLKEmojiableVibrantLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain) TLKRichText *richText; // @synthesize richText=_richText;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributedString;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (void)updateRoundedCornerLabels:(id)arg1;
- (void)updateIcons:(id)arg1;
- (void)updateStarRating:(id)arg1;
- (void)makeTertiary;
- (void)setFont:(id)arg1;
- (void)disableUnbatchedUpdates;
- (void)disableObserver:(_Bool)arg1;
- (void)updateWithRichText:(id)arg1;
- (id)observableProperties;
- (void)setStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
