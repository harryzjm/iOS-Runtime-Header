//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class AXEventRepresentation, NSArray, NSString;

@protocol AXBackBoardServerInstanceDelegate <NSObject>
- (void)setCapsLockLightOn:(_Bool)arg1;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
- (void)zoomListenerRegistered;
- (void)setVoiceOverItemChooserVisible:(_Bool)arg1;
- (void)setSiriViewServicePid:(int)arg1;
- (int)accessibilityUIPid;
- (void)setAccessibilityUIPid:(int)arg1;
- (void)setAssistiveTouchPid:(int)arg1;
- (void)registerEventListener:(_Bool)arg1;
- (void)setDisableSystemGestureRecognitionInEvents:(_Bool)arg1;
- (void)userEventOccurred;
- (void)enableEventTap:(_Bool)arg1 forApplication:(int)arg2;
- (void)postEvent:(AXEventRepresentation *)arg1 systemEvent:(_Bool)arg2 afterNamedTap:(NSString *)arg3 namedTaps:(NSArray *)arg4;
- (unsigned int)contextIdForDisplayPoint:(struct CGPoint)arg1;
- (unsigned int)contextIdHosterForContextId:(unsigned int)arg1;
- (struct CGRect)convertFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
@end

