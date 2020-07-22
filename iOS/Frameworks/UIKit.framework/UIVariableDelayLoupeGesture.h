//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture
{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (void)startTimer;
- (_Bool)isCloseToCaret;
- (void)invalidate;

@end

