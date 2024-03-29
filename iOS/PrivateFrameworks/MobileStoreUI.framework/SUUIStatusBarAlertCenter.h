//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SUUIClickThroughWindow, _SUUIStatusBarAlertViewController;

__attribute__((visibility("hidden")))
@interface SUUIStatusBarAlertCenter : NSObject
{
    double _duration;
    CDUnknownBlockType _actionBlock;
    _SUUIClickThroughWindow *_window;
    _SUUIStatusBarAlertViewController *_rootViewController;
}

+ (id)sharedCenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) _SUUIStatusBarAlertViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) _SUUIClickThroughWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;
- (void)dismiss;
- (void)scheduleDismiss;
- (void)unscheduleDismiss;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *message;
@property(nonatomic, getter=isVisible) _Bool visible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

