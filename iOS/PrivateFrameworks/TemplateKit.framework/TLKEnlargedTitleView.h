//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TLKMultilineText, TLKVibrantLabel, UILabel;

@interface TLKEnlargedTitleView
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    UILabel *_titleLabel;
    TLKVibrantLabel *_subtitleLabel;
}

@property(retain) TLKVibrantLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

@end

