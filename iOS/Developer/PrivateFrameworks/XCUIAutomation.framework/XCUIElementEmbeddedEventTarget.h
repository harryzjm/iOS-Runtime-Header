//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/XCUIElementEventTarget-Protocol.h>

@class NSString;

@interface XCUIElementEmbeddedEventTarget <XCUIElementEventTarget>
{
}

- (_Bool)_swipe:(unsigned long long)arg1 withVelocity:(double)arg2 error:(id *)arg3;
- (_Bool)clickForDuration:(double)arg1 thenDragToElement:(id)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4 error:(id *)arg5;
- (_Bool)rightClickWithError:(id *)arg1;
- (_Bool)doubleClickWithError:(id *)arg1;
- (_Bool)clickWithError:(id *)arg1;
- (_Bool)hoverWithError:(id *)arg1;
- (_Bool)swipeDownWithVelocity:(double)arg1 error:(id *)arg2;
- (_Bool)swipeDownWithError:(id *)arg1;
- (_Bool)swipeUpWithVelocity:(double)arg1 error:(id *)arg2;
- (_Bool)swipeUpWithError:(id *)arg1;
- (_Bool)swipeRightWithVelocity:(double)arg1 error:(id *)arg2;
- (_Bool)swipeRightWithError:(id *)arg1;
- (_Bool)swipeLeftWithVelocity:(double)arg1 error:(id *)arg2;
- (_Bool)swipeLeftWithError:(id *)arg1;
- (_Bool)tapWithNumberOfTaps:(unsigned long long)arg1 numberOfTouches:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)twoFingerTapWithError:(id *)arg1;
- (_Bool)doubleTapWithError:(id *)arg1;
- (_Bool)tapWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

