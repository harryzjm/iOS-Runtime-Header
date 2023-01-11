//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapRecognizer;

__attribute__((visibility("hidden")))
@interface UITextMultiTapRecognizer <UITapRecognizerDelegate>
{
    id _target;
    SEL _tapAction;
    UITapRecognizer *_tapRecognizer;
    unsigned long long _tapCount;
    unsigned long long _touchDownCount;
    _Bool _sendTapAction;
    _Bool _recognizesOnSubsequentTouchDowns;
}

- (void).cxx_destruct;
@property _Bool recognizesOnSubsequentTouchDowns; // @synthesize recognizesOnSubsequentTouchDowns=_recognizesOnSubsequentTouchDowns;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)resetTapCountForTapRecognizer:(id)arg1;
- (double)_touchSloppinessFactor;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
@property(readonly) struct CGPoint location;
@property(readonly) unsigned long long tapCount;
@property(readonly) NSArray *touchesForTap;
@property double maximumIntervalBetweenTaps;
@property double maximumTouchDownDuration;
@property double allowableMovement;
@property unsigned long long minimumNumberOfTapsRequired;
@property unsigned long long numberOfTouchesRequired;
- (void)onStateUpdate:(id)arg1;
- (id)initWithTarget:(id)arg1 tapAction:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
