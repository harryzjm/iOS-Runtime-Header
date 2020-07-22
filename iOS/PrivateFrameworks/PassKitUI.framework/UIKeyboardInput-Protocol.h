//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString;
@protocol UIKeyboardInput;

@protocol UIKeyboardInput <NSObject>

@optional
- (void)keyboardInputChangedSelection:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInputChanged:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInputShouldDelete:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldInsertText:(NSString *)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
@end

