//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView
{
    unsigned long long _textStorageEditingDepth;
    MFComposeRecipientTextView *_hostRecipientView;
}

@property MFComposeRecipientTextView *hostRecipientView; // @synthesize hostRecipientView=_hostRecipientView;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)_delegateSupportsKeyboardEvents;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (long long)baseWritingDirection;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)batchTextStorageUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isEditingTextStorage;
- (void)enumerateAtomAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAtoms:(CDUnknownBlockType)arg1;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
@property(readonly) NSArray *atoms;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

