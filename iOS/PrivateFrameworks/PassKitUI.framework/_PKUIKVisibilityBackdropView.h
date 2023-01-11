//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIBackdropView.h>

@protocol _PKUIKVisibilityBackdropViewDelegate;

@interface _PKUIKVisibilityBackdropView : _UIBackdropView
{
    double _visibility;
    double _visibilityAnimationTarget;
    unsigned int _animationCounter;
    unsigned int _styleToken;
    _Bool _updatingBackdropSettings;
    long long _style;
    id <_PKUIKVisibilityBackdropViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_PKUIKVisibilityBackdropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pkui_accessibilitySettingsDidChange:(id)arg1;
- (void)_updateStyleIfNecessary;
- (void)pkui_commitBackdropSettings;
- (void)pkui_updateBackdropSettings;
- (long long)pkui_preferredBackdropStyle;
- (void)_pkui_setVisibility:(double)arg1 animated:(_Bool)arg2;
- (void)pkui_setVisibility:(double)arg1 animated:(_Bool)arg2;
- (double)pkui_visibility;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 privateStyle:(long long)arg2;

@end
