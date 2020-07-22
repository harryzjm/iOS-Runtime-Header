//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, UIViewController, _SFBrowserContentViewController;

__attribute__((visibility("hidden")))
@interface _SFUnresponsiveWebProcessController : NSObject
{
    NSTimer *_webProcessWatchdogTimer;
    NSMutableArray *_tapToRadarRecords;
    _SFBrowserContentViewController *_contentViewController;
    _Bool _shouldIgnoreDidBecomeResponsive;
    UIViewController *_activeBrowserContentViewController;
}

+ (id)sharedController;
@property(nonatomic) __weak UIViewController *activeBrowserContentViewController; // @synthesize activeBrowserContentViewController=_activeBrowserContentViewController;
@property(nonatomic) _Bool shouldIgnoreDidBecomeResponsive; // @synthesize shouldIgnoreDidBecomeResponsive=_shouldIgnoreDidBecomeResponsive;
- (void).cxx_destruct;
- (void)_promptTapToRadar:(CDUnknownBlockType)arg1;
- (void)_tapToRadar;
@property(readonly, nonatomic) _Bool supportsTapToRadar;
- (void)_webProcessWatchdogTimerFired:(id)arg1;
- (void)recordURLForTapToRadar:(id)arg1 hostAppIdentifier:(id)arg2;
- (void)scheduleWatchdogTimerForContentViewController:(id)arg1;
- (void)unscheduleWatchdogTimer;

@end

