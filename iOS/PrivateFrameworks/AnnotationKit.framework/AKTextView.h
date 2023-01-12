//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@protocol AKTextViewKeyCommandDelegate;

@interface AKTextView : UITextView
{
    long long _maximumNumberOfCharacters;
    id <AKTextViewKeyCommandDelegate> _keyCommandDelegate;
}

- (void).cxx_destruct;
@property __weak id <AKTextViewKeyCommandDelegate> keyCommandDelegate; // @synthesize keyCommandDelegate=_keyCommandDelegate;
@property long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
- (_Bool)isBlockedAction:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputTraits;
- (_Bool)canBecomeFirstResponder;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)handleBackTabCommand:(id)arg1;
- (void)handleTabCommand:(id)arg1;
- (id)keyCommands;

@end

