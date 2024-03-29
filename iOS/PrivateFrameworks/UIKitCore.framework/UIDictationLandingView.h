//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView
{
    UITextRange *_range;
    id _placeholder;
    _Bool _didHaveText;
    _Bool _willInsertResult;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    _Bool _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
    id <UITextCursorAssertion> _blinkAssertion;
}

+ (long long)fallbackPlaceholderLength;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (double)widthForLineHeight:(double)arg1;
+ (double)diameterForLineHeight:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (double)fadeOutDuration;
- (void)stopLandingForError;
- (void)errorShakeDidFinish;
- (_Bool)hasActivePlaceholder;
- (void)stopLanding;
- (void)startLandingIfNecessary;
- (void)performRemoteSelector:(SEL)arg1;
- (void)startDisplayLinkIfNecessary;
- (void)showCursor;
- (void)hideCursor;
- (_Bool)delegateWasEmpty;
- (void)updatePosition;
- (id)_currentTextInputView;
- (void)drawRect:(struct CGRect)arg1;
- (void)advanceLanding:(id)arg1;
- (void)shrinkWithCompletion:(id)arg1;
- (void)rotateBy:(double)arg1;
- (void)clearRotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

