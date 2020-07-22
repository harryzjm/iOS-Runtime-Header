//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIFont, UILabel;

@interface AVLabel : UIView
{
    _Bool _showsLoadingIndicator;
    _Bool _hidesLabelTextWhenLoadingIndicatorVisible;
    _Bool _collapsed;
    _Bool _included;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    long long _loadingIndicatorAlignment;
    UILabel *_label;
    UIActivityIndicatorView *_loadingIndicator;
    struct CGSize _extrinsicContentSize;
}

@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long loadingIndicatorAlignment; // @synthesize loadingIndicatorAlignment=_loadingIndicatorAlignment;
@property(nonatomic) _Bool hidesLabelTextWhenLoadingIndicatorVisible; // @synthesize hidesLabelTextWhenLoadingIndicatorVisible=_hidesLabelTextWhenLoadingIndicatorVisible;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;

@end

