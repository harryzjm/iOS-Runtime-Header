//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol OBPasscodeInputViewDelegate;

__attribute__((visibility("hidden")))
@interface OBPasscodeInputView : UIView
{
    id <OBPasscodeInputViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OBPasscodeInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shake;
- (id)passcodeField;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;

@end
