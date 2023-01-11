//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingButtonView : MPButton
{
    _Bool _userInterfaceStyleSwitchingEnabled;
    long long _currentMode;
    long long _deviceType;
    CCUICAPackageView *_packageView;
}

+ (_Bool)_cursorInteractionEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) _Bool userInterfaceStyleSwitchingEnabled; // @synthesize userInterfaceStyleSwitchingEnabled=_userInterfaceStyleSwitchingEnabled;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)_updateGlyphState;
- (void)_updateGlyphPackage;
- (id)_glyphResource;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
