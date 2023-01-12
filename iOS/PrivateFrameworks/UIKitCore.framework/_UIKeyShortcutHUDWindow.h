//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol _UIKeyShortcutHUDWindowDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDWindow
{
    id <_UIKeyShortcutHUDWindowDelegate> _delegate;
    NSArray *_hudKeyCommands;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *hudKeyCommands; // @synthesize hudKeyCommands=_hudKeyCommands;
@property(nonatomic) __weak id <_UIKeyShortcutHUDWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)keyCommands;
- (id)_roleHint;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (_Bool)_shouldCreateContextAsSecure;
- (void)_hudWindowSceneDidResignTargetOfKeyboardEventDeferringEnvironment:(id)arg1;
- (void)resignKeyWindow;
- (id)initWithWindowScene:(id)arg1;

@end
