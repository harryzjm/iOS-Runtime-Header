//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;

@optional
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)didEndGesture;
- (void)willBeginGesture;
- (_Bool)hasMarkedText;
- (_Bool)transitionInProgress;
@end
