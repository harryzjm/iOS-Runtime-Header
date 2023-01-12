//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

@class NSArray, NSTimer, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusDebugWindow : UIWindow
{
    NSTimer *_timer;
    NSArray *_cacheModules;
    UIScrollView *_scrollView;
    struct CGPoint _lastDragPoint;
}

+ (_Bool)_isSystemWindow;
+ (_Bool)hasAnyModules;
+ (id)moduleClasses;
- (void).cxx_destruct;
- (void)_update:(id)arg1;
- (void)_updateTimer;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (_Bool)_isEligibleForFocusOcclusion;
- (_Bool)isTransparentFocusItem;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)drag:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (_Bool)canBecomeKeyWindow;

@end

