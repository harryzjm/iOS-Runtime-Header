//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11HoverTextUI21HoverTextEventHandler : NSObject
{
    MISSING_TYPE *elementAtPointerDidChange;
    MISSING_TYPE *azimuthDidChange;
    MISSING_TYPE *stylusMoved;
    MISSING_TYPE *activationLockSequenceOccurred;
    MISSING_TYPE *activationButtonPressed;
    MISSING_TYPE *activationButtonReleased;
    MISSING_TYPE *axHandlerQueue;
    MISSING_TYPE *previousHoverElement;
    MISSING_TYPE *lastMouseEventTime;
    MISSING_TYPE *pointerEventStreams;
    MISSING_TYPE *currentStylusAzimuthForElement;
    MISSING_TYPE *activationKey;
    MISSING_TYPE *lastStylusEventTime;
    MISSING_TYPE *$__lazy_storage_$_eventProcessor;
    MISSING_TYPE *previousKeyModifierState;
    MISSING_TYPE *activationKeyPressCount;
    MISSING_TYPE *activationKeyPressIsActive;
    MISSING_TYPE *$__lazy_storage_$_activationKeyHoldTimer;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)handlePointerEvent:(id)arg1;

@end

