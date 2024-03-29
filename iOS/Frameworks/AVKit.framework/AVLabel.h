//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVLayoutItemAttributes, NSAttributedString, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface AVLabel : UIView
{
    _Bool _collapsed;
    _Bool _included;
    _Bool _removed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _showsLoadingIndicator;
    UILabel *_label;
    AVLayoutItemAttributes *_layoutAttributes;
    long long _loadingIndicatorAlignment;
    NSString *_text;
    NSAttributedString *_attributedText;
    UIFont *_font;
    UIActivityIndicatorView *_loadingIndicator;
    long long _numberOfLines;
    NSLayoutConstraint *_loadingIndicatorLeftAlignmentConstraint;
    NSLayoutConstraint *_loadingIndicatorRightAlignmentConstraint;
    struct CGSize _extrinsicContentSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *loadingIndicatorRightAlignmentConstraint; // @synthesize loadingIndicatorRightAlignmentConstraint=_loadingIndicatorRightAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *loadingIndicatorLeftAlignmentConstraint; // @synthesize loadingIndicatorLeftAlignmentConstraint=_loadingIndicatorLeftAlignmentConstraint;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long loadingIndicatorAlignment; // @synthesize loadingIndicatorAlignment=_loadingIndicatorAlignment;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (struct CGSize)minimumSize;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (void)layoutAttributesDidChange;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)_updateLayoutItem;
@property(readonly, nonatomic) UILabel *labelIfLoaded;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

