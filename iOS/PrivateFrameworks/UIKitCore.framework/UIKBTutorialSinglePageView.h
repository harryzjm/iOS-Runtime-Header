//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialSinglePageView : UIView
{
    _Bool _useAlertStyle;
    UIView *_visualDisplayView;
    UILabel *_textTitle;
    UILabel *_textBody;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useAlertStyle; // @synthesize useAlertStyle=_useAlertStyle;
@property(retain, nonatomic) UILabel *textBody; // @synthesize textBody=_textBody;
@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIView *visualDisplayView; // @synthesize visualDisplayView=_visualDisplayView;
- (void)configPageView;
- (void)layoutSubviews;
- (id)initWithImageView:(id)arg1;

@end

