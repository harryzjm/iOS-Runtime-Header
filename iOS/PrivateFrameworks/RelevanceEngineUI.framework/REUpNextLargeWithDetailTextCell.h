//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REUpNextImageView, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextLargeWithDetailTextCell
{
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UILabel *_detail1Label;
    UILabel *_detail2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_bodyEffectView;
    UIVisualEffectView *_detail1EffectView;
    UIVisualEffectView *_detail2EffectView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)secondaryEffectViews;
- (id)primaryEffectViews;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

