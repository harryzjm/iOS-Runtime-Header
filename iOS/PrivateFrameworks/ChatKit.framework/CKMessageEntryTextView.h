//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmojiKit/EMKTextView.h>

@class NSAttributedString, NSString, UIColor, UIKeyboardInputMode, UILabel;

@interface CKMessageEntryTextView : EMKTextView
{
    _Bool _showingDictationPlaceholder;
    _Bool _sendCurrentLocationFromKeyboardEnabled;
    _Bool _updatesFontOnTextChange;
    _Bool _hideCaret;
    UIColor *_placeholderColor;
    double _placeHolderWidth;
    double _placeholderExpandedWidth;
    NSString *_autocorrectionContext;
    NSString *_responseContext;
    double _adjustedLineFragmentPadding;
    UILabel *_placeholderLabel;
    UIKeyboardInputMode *_savedKeyboardInputMode;
}

@property(retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode; // @synthesize savedKeyboardInputMode=_savedKeyboardInputMode;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic) double adjustedLineFragmentPadding; // @synthesize adjustedLineFragmentPadding=_adjustedLineFragmentPadding;
@property(nonatomic) _Bool hideCaret; // @synthesize hideCaret=_hideCaret;
@property(nonatomic) _Bool updatesFontOnTextChange; // @synthesize updatesFontOnTextChange=_updatesFontOnTextChange;
@property(nonatomic) _Bool sendCurrentLocationFromKeyboardEnabled; // @synthesize sendCurrentLocationFromKeyboardEnabled=_sendCurrentLocationFromKeyboardEnabled;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext=_responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext=_autocorrectionContext;
@property(nonatomic, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder; // @synthesize showingDictationPlaceholder=_showingDictationPlaceholder;
@property(nonatomic) double placeholderExpandedWidth; // @synthesize placeholderExpandedWidth=_placeholderExpandedWidth;
@property(nonatomic) double placeHolderWidth; // @synthesize placeHolderWidth=_placeHolderWidth;
@property(copy, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)updateTextView;
- (void)restoreKeyboardInputMode;
- (void)saveKeyboardInputMode;
- (void)updateFontIfNeeded;
@property(readonly, nonatomic, getter=isSingleLine) _Bool singleLine;
@property(copy, nonatomic) NSString *placeholderText;
@property(copy, nonatomic) NSAttributedString *compositionText;
- (SEL)_sendCurrentLocationAction;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (void)dealloc;

@end

