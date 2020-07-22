//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UILabel, UITextView, UIView;

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UIView *_bottomBorderView;
    UILabel *_label;
    long long _maximumCharacterCount;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIView *_topBorderView;
}

+ (id)newTextView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long maximumCharacterCount; // @synthesize maximumCharacterCount=_maximumCharacterCount;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *label;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

