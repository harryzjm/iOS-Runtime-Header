//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSParagraphStyle, UIFont;

@interface NFLSiriSuggestionsWidgetLayoutAttributes
{
    UIFont *_titleFont;
    UIFont *_bodyFont;
    NSParagraphStyle *_bodyParagraphStyle;
    UIFont *_newsAndPrivacyFont;
    struct CGRect _iconFrame;
    struct CGRect _titleFrame;
    struct CGRect _bodyFrame;
    struct CGRect _newsAndPrivacyFrame;
}

@property(retain, nonatomic) UIFont *newsAndPrivacyFont; // @synthesize newsAndPrivacyFont=_newsAndPrivacyFont;
@property(nonatomic) struct CGRect newsAndPrivacyFrame; // @synthesize newsAndPrivacyFrame=_newsAndPrivacyFrame;
@property(retain, nonatomic) NSParagraphStyle *bodyParagraphStyle; // @synthesize bodyParagraphStyle=_bodyParagraphStyle;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) struct CGRect bodyFrame; // @synthesize bodyFrame=_bodyFrame;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

