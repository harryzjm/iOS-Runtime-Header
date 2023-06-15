//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIFont, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterDateView : UIView
{
    _Bool _useVibrantAppearance;
    _Bool _useThinnerFontWeightForTime;
    UIFont *_timeFont;
    UIColor *_timeColor;
    UIVisualEffectView *_visualEffectView;
    UILabel *_timeLabel;
    UIFont *_effectiveTimeFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *effectiveTimeFont; // @synthesize effectiveTimeFont=_effectiveTimeFont;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) _Bool useThinnerFontWeightForTime; // @synthesize useThinnerFontWeightForTime=_useThinnerFontWeightForTime;
@property(retain, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property(retain, nonatomic) UIFont *timeFont; // @synthesize timeFont=_timeFont;
@property(nonatomic) _Bool useVibrantAppearance; // @synthesize useVibrantAppearance=_useVibrantAppearance;
- (void)_updateTimeLabel;
- (void)layoutWithLayout:(id)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)_initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

