//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILongPressGestureRecognizer.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> *_textView;
}

- (void).cxx_destruct;
@property __weak UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (_Bool)_isGestureType:(long long)arg1;
- (void)_startEnoughTimeElapsedTimer;
@property(readonly, nonatomic) _Bool isLongPress;
- (_Bool)shouldUseLegacyBehavior;
- (_Bool)isWithinRecentTap;
- (_Bool)isCloseToCaret;
- (_Bool)_tracksPointerTouch;
- (_Bool)_allowsForShortDelay;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;

@end

