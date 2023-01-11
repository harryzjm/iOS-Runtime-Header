//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPageControl.h>

#import <SpringBoardHome/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapGestureRecognizer, _UILegibilitySettings;
@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl <UIGestureRecognizerDelegate>
{
    double _cachedDefaultHeight;
    _Bool _actsAsButton;
    _UILegibilitySettings *_legibilitySettings;
    id <SBIconListPageControlDelegate> _delegate;
    NSArray *_touchIgnoreRects;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool actsAsButton; // @synthesize actsAsButton=_actsAsButton;
@property(copy, nonatomic) NSArray *touchIgnoreRects; // @synthesize touchIgnoreRects=_touchIgnoreRects;
@property(nonatomic) __weak id <SBIconListPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)legibilitySettingsDidChange;
- (id)effectiveLegibilitySettings;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)pageControlCurrentPageDidChange:(id)arg1;
- (void)tapGestureDidUpdate:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setButtonHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) double defaultHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
