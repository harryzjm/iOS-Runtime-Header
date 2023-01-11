//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <RTTUI/UITextViewDelegate-Protocol.h>

@class CALayer, NSString, RTTUtterance, UITextView;
@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    _Bool _editingUtterance;
    _Bool _accessibilityIsUnread;
    RTTUtterance *_utterance;
    id <RTTUIUtteranceCellDelegate> _delegate;
}

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) _Bool accessibilityIsUnread; // @synthesize accessibilityIsUnread=_accessibilityIsUnread;
@property(nonatomic) __weak id <RTTUIUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditingUtterance) _Bool editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property(retain, nonatomic) RTTUtterance *utterance; // @synthesize utterance=_utterance;
- (_Bool)_accessibilityRealtimeCompleted;
- (_Bool)_accessibilityRealtimeHasUnread;
- (void)_accessibilityHandleATFocused:(_Bool)arg1 assistiveTech:(id)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)textViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)adjustTextViewSize;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (struct _NSRange)selectedTextRange;
- (id)utteranceTextColor;
- (void)dealloc;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;
- (void)updateUtterance:(id)arg1 postNotifications:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
