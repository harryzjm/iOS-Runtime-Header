//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSTimer, UIBlurEffect, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MUPDFPageLabelView : UIView
{
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
    unsigned long long currentPageIndex;
}

+ (id)sidebarAttributedString;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex;
- (void)fadeOut;
- (void)resetFadeOutTimer;
- (void)showNowInSuperView:(id)arg1 withText:(id)arg2;
- (double)_fadeOutDuration;
- (double)_fadeOutDelay;
@property(readonly, nonatomic, getter=isTimerInstalled) _Bool timerInstalled;
- (void)setText:(id)arg1;
- (void)dealloc;
- (void)clearTimer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

