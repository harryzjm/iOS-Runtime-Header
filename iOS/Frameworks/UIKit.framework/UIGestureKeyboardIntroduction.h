//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSTimer, UIKBKeyView, UIKeyboardLayoutStar, UIView;

__attribute__((visibility("hidden")))
@interface UIGestureKeyboardIntroduction : NSObject
{
    UIKeyboardLayoutStar *m_layout;
    UIView *m_view;
    UIKBKeyView *m_firstKeyView;
    UIKBKeyView *m_secondKeyView;
    CDUnknownBlockType m_completionBlock;
    double m_start;
    NSTimer *m_gestureKeyboardInfoTimer;
    struct CGPoint m_initPoint;
    _Bool m_isInTransition;
    _Bool m_hasPeeked;
    unsigned long long m_insertedTextLength;
}

- (void)dismissGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction:(id)arg1;
- (void)playGestureKeyboardIntroduction:(id)arg1;
- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;
- (void)insertText:(id)arg1 forKey:(id)arg2;
- (void)showGestureKeyboardIntroduction;
- (id)initWithLayoutStar:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

