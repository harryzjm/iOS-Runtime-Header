//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMButtonLabel : UIView
{
    _Bool _wantsLegibilityShadow;
    NSString *_text;
    UILabel *__label;
    struct CGSize _contentSize;
}

@property(readonly, retain, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool wantsLegibilityShadow; // @synthesize wantsLegibilityShadow=_wantsLegibilityShadow;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
@property(nonatomic) long long textAlignment;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

