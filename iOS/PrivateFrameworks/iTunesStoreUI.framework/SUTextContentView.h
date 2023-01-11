//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextContentView.h>

@class NSString, UILabel;

@interface SUTextContentView : UITextContentView
{
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) NSString *placeholder;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)dealloc;

@end
