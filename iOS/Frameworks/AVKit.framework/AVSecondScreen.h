//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVSecondScreenConnection, CADisplay, UIScreen, UIWindow, UIWindowScene;

__attribute__((visibility("hidden")))
@interface AVSecondScreen : NSObject
{
    _Bool _TVOutScreen;
    AVObservationController *_observationController;
    UIWindow *_window;
    UIWindowScene *_windowScene;
    UIScreen *_screen;
    AVSecondScreenConnection *_secondScreenConnection;
    long long _state;
    CADisplay *_debugInfoDisplay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplay *debugInfoDisplay; // @synthesize debugInfoDisplay=_debugInfoDisplay;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) AVSecondScreenConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic, getter=isTVOutScreen) _Bool TVOutScreen; // @synthesize TVOutScreen=_TVOutScreen;
- (_Bool)_isWindowSceneAvailable;
- (void)_updatePreferredDisplayCriteria;
@property(readonly, nonatomic) struct CGRect sceneBounds;
- (_Bool)isAvailable;
- (void)setState:(long long)arg1;
- (void)connectWithSecondScreenConnection:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

