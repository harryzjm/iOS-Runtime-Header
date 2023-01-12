//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/SBUILegibility-Protocol.h>

@class CSFocusActivityIndicator, NSString, UIView, _UILegibilitySettings;
@protocol CSFocusActivityViewDelegate, FCActivityDescribing;

@interface CSFocusActivityView <SBUILegibility>
{
    CSFocusActivityIndicator *_activityIndicator;
    _Bool _enabled;
    id <CSFocusActivityViewDelegate> _delegate;
}

+ (struct CGSize)activityViewSize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSFocusActivityViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (struct CGRect)_activityIndicatorFrame;
- (void)_removeActivityIndicatorTargetActions;
- (void)_addActivityIndicatorTargetActions;
- (void)_handleButtonPress:(id)arg1;
- (void)_handleButtonTouchEnded:(id)arg1;
- (void)_handleButtonTouchBegan:(id)arg1;
@property(readonly, nonatomic) _Bool isActivityIndicatorVisible;
- (void)removeIndicator;
@property(readonly, nonatomic) UIView *activityIndicator;
@property(retain, nonatomic) id <FCActivityDescribing> activity;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
