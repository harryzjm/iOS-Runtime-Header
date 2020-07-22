//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXEventRepresentation, NSString;

@interface AXBEventManager : NSObject
{
    NSString *_eventTapIdentifier;
    _Bool _homeIsDown;
    _Bool _overrideGestureRecognitionState;
    _Bool _eventListenerEnabled;
    struct __IOHIDUserDevice *_userDevice;
    AXEventRepresentation *_lastHIDRecord;
}

+ (id)sharedManager;
@property(nonatomic) _Bool homeIsDown; // @synthesize homeIsDown=_homeIsDown;
- (void).cxx_destruct;
- (unsigned int)machPortForPoint:(struct CGPoint)arg1;
- (unsigned int)contextIdForPosition:(struct CGPoint)arg1 displayId:(unsigned int)arg2;
- (unsigned int)clientPortForContextId:(unsigned int)arg1;
- (void)clearLastRecordPostedThrougHID;
- (id)lastRecordPostedThroughHID;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4;
- (unsigned int)contextIdHosterForContextId:(unsigned int)arg1;
- (void)dispatchEventRepresentationToClient:(id)arg1;
- (void)enableEventTap:(_Bool)arg1 forApplication:(int)arg2;
- (void)_enableAssistiveTouchEventTap:(_Bool)arg1;
- (_Bool)_assistiveTouchEventTap:(id)arg1;
- (void)setDisableSystemGestureRecognitionInEvents:(_Bool)arg1;
- (void)_normalizeEventForContext:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;
- (unsigned int)systemAppPort;
- (unsigned int)systemEventPort;
- (id)windowServer;
- (int)systemAppPid;
- (void)registerEventListener:(_Bool)arg1;
- (id)init;

@end

