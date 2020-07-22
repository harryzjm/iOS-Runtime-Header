//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/MTVibrantStylingProviderObserving-Protocol.h>
#import <UserNotificationsUIKit/MTVibrantStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/UITextViewDelegate-Protocol.h>

@class MTFontProvider, MTVibrantStylingProvider, NSMutableDictionary, NSString, NSStringDrawingContext, UIImage, UIImageView, UILabel, UITextView;
@protocol NCNotificationContentViewDelegate;

@interface NCNotificationContentView : UIView <UITextViewDelegate, MTVibrantStylingProviderObserving, MTVibrantStylingRequiring, MTContentSizeCategoryAdjusting>
{
    long long _lookStyle;
    struct UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    _Bool _adjustsFontForContentSizeCategory;
    MTVibrantStylingProvider *_vibrantStylingProvider;
    NSString *_preferredContentSizeCategory;
    id <NCNotificationContentViewDelegate> _delegate;
    UIView *_accessoryView;
    MTFontProvider *_fontProvider;
    UILabel *_primaryLabel;
    UILabel *_outgoingPrimaryLabel;
    UILabel *_primarySubtitleLabel;
    UILabel *_outgoingPrimarySubtitleLabel;
    UITextView *_secondaryTextView;
    UITextView *_outgoingSecondaryTextView;
}

@property(retain, nonatomic, getter=_outgoingSecondaryTextView, setter=_setOutgoingSecondaryTextView:) UITextView *outgoingSecondaryTextView; // @synthesize outgoingSecondaryTextView=_outgoingSecondaryTextView;
@property(retain, nonatomic, getter=_secondaryTextView, setter=_setSecondaryTextView:) UITextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic, getter=_outgoingPrimarySubtitleLabel, setter=_setOutgoingPrimarySubtitleLabel:) UILabel *outgoingPrimarySubtitleLabel; // @synthesize outgoingPrimarySubtitleLabel=_outgoingPrimarySubtitleLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_outgoingPrimaryLabel, setter=_setOutgoingPrimaryLabel:) UILabel *outgoingPrimaryLabel; // @synthesize outgoingPrimaryLabel=_outgoingPrimaryLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) MTFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak id <NCNotificationContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(retain, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider; // @synthesize vibrantStylingProvider=_vibrantStylingProvider;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)vibrantStylingDidChangeForProvider:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_frameForThumbnailInRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_updateTextAttributesForLabel:(id)arg1;
@property(retain, nonatomic) NSString *secondaryText;
- (id)_lazyOutgoingSecondaryTextView;
- (id)_lazySecondaryTextView;
- (id)_newSecondaryTextView;
- (void)_updateStyleForSecondaryTextView:(id)arg1 withStyle:(long long)arg2;
@property(nonatomic) unsigned long long messageNumberOfLines;
- (void)_setSecondaryTextNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)_secondaryTextNumberOfLines;
- (void)_updateFontForSecondaryTextView:(id)arg1 withStyle:(long long)arg2;
- (id)_lazyThumbnailImageView;
@property(retain, nonatomic) NSString *primarySubtitleText;
- (id)_lazyOutgoingPrimarySubtitleLabel;
- (id)_lazyPrimarySubtitleLabel;
@property(retain, nonatomic) NSString *primaryText;
- (id)_lazyOutgoingPrimaryLabel;
- (id)_lazyPrimaryLabel;
- (id)_newPrimaryLabel;
- (void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_setText:(id)arg1 withFinalTextView:(id)arg2 setter:(CDUnknownBlockType)arg3 andTransitionLabel:(id)arg4 setter:(CDUnknownBlockType)arg5;
- (void)_setText:(id)arg1 withFinalLabel:(id)arg2 setter:(CDUnknownBlockType)arg3 andTransitionLabel:(id)arg4 setter:(CDUnknownBlockType)arg5;
- (void)_setText:(id)arg1 withFinalTextDisplayingView:(id)arg2 setter:(CDUnknownBlockType)arg3 andTransitionTextDisplayingView:(id)arg4 setter:(CDUnknownBlockType)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(struct CGSize)arg3;
- (long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3;
- (void)_clearCacheForFont:(id)arg1;
- (void)_invalidateNumberOfLinesCache;
- (struct CGRect)_secondaryTextViewBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(double)arg3;
- (long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(long long)arg1;
- (long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_primarySubtitleLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(double)arg3;
- (long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(long long)arg1;
- (long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_primaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(double)arg3;
- (long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(long long)arg1;
- (long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (struct UIEdgeInsets)_contentInsetsForStyle:(long long)arg1;
- (struct UIEdgeInsets)_contentInsetsForLongLook;
- (struct UIEdgeInsets)_contentInsetsForShortLook;
- (struct UIEdgeInsets)_contentInsets;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

