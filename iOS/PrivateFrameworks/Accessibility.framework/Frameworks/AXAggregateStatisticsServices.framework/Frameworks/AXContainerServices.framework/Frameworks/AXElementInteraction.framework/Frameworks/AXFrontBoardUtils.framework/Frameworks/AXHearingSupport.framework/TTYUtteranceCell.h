//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <AXHearingSupport/UITextViewDelegate-Protocol.h>

@class CALayer, NSString, TTYUtterance, UITextView;
@protocol TTYUtteranceCellDelegate;

@interface TTYUtteranceCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    _Bool _editingUtterance;
    TTYUtterance *_utterance;
    id <TTYUtteranceCellDelegate> _delegate;
}

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
@property(nonatomic) id <TTYUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditingUtterance) _Bool editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property(retain, nonatomic) TTYUtterance *utterance; // @synthesize utterance=_utterance;
- (void).cxx_destruct;
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
- (void)dealloc;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)updateUtterance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
