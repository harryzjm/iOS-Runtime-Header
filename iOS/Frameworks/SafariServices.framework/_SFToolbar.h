//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIToolbar.h>

@class NSString, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface _SFToolbar : UIToolbar
{
    _UIBackdropView *_backgroundView;
    _UIBackdropViewSettings *_customBackdropSettings;
    UIView *_separator;
    _Bool _usesDarkTheme;
    long long _placement;
    unsigned long long _tintStyle;
}

+ (double)defaultHeight;
@property(nonatomic) unsigned long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
- (void).cxx_destruct;
- (void)updateBackdropSettings:(id)arg1;
- (_Bool)_tintUsesDarkTheme;
- (void)updateTintColor;
- (id)_backdropInputSettings;
@property(copy, nonatomic) NSString *backdropGroupName;
@property(nonatomic) _Bool backdropComputesColorSettings;
- (void)layoutSubviews;
@property(readonly, nonatomic) double URLFieldHorizontalMargin;
@property(readonly, nonatomic) long long toolbarSize;
- (id)initWithPlacement:(long long)arg1;

@end

