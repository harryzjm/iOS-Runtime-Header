//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICAttachmentInsertionController, ICHashtagsNode, ICNote, ICTableColumnTextView, NSMutableDictionary, NSMutableSet, UITextView;
@protocol ICHashtagAnalyticsDelegate, ICHashtagKeyboardDelegate;

@interface ICHashtagController : NSObject
{
    _Bool _isUpdatingKeyboard;
    id <ICHashtagKeyboardDelegate> _hashtagKeyboardDelegate;
    id <ICHashtagKeyboardDelegate> _hashtagTableKeyboardDelegate;
    ICAttachmentInsertionController *_attachmentInsertionController;
    ICNote *_note;
    ICTableColumnTextView *_tableTextView;
    UITextView *_textView;
    id <ICHashtagAnalyticsDelegate> _analyticsDelegate;
    NSMutableDictionary *_hashtagSuggestionsDictionary;
    NSMutableSet *_hashtagsNames;
    ICHashtagsNode *_hashtagsTree;
    unsigned long long _maxNameLength;
    struct _NSRange _editedRange;
}

+ (_Bool)shouldAutoConvertToTag;
+ (_Bool)isValidPostfixCharacter:(unsigned short)arg1;
+ (_Bool)range:(struct _NSRange)arg1 hasValidPostfixCharacterForString:(id)arg2;
+ (_Bool)isValidPrefixCharacter:(unsigned short)arg1 languageHasSpaces:(_Bool)arg2;
+ (_Bool)range:(struct _NSRange)arg1 hasValidPrefixCharacterForString:(id)arg2 languageHasSpaces:(_Bool)arg3;
+ (_Bool)range:(struct _NSRange)arg1 isPrefixedWithHashtagForString:(id)arg2;
+ (_Bool)isBeginningHashtagAtSelectionRange:(struct _NSRange)arg1 inString:(id)arg2 languageHasSpaces:(_Bool)arg3;
+ (struct _NSRange)range:(struct _NSRange)arg1 appendingSubstringRange:(struct _NSRange)arg2;
+ (struct _NSRange)rangeOfLastCharacterInRange:(struct _NSRange)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxNameLength; // @synthesize maxNameLength=_maxNameLength;
@property(retain, nonatomic) ICHashtagsNode *hashtagsTree; // @synthesize hashtagsTree=_hashtagsTree;
@property(retain, nonatomic) NSMutableSet *hashtagsNames; // @synthesize hashtagsNames=_hashtagsNames;
@property(retain, nonatomic) NSMutableDictionary *hashtagSuggestionsDictionary; // @synthesize hashtagSuggestionsDictionary=_hashtagSuggestionsDictionary;
@property(nonatomic) __weak id <ICHashtagAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak ICTableColumnTextView *tableTextView; // @synthesize tableTextView=_tableTextView;
@property(nonatomic) struct _NSRange editedRange; // @synthesize editedRange=_editedRange;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
@property(nonatomic) __weak ICAttachmentInsertionController *attachmentInsertionController; // @synthesize attachmentInsertionController=_attachmentInsertionController;
@property(nonatomic) _Bool isUpdatingKeyboard; // @synthesize isUpdatingKeyboard=_isUpdatingKeyboard;
@property(nonatomic) __weak id <ICHashtagKeyboardDelegate> hashtagTableKeyboardDelegate; // @synthesize hashtagTableKeyboardDelegate=_hashtagTableKeyboardDelegate;
@property(nonatomic) __weak id <ICHashtagKeyboardDelegate> hashtagKeyboardDelegate; // @synthesize hashtagKeyboardDelegate=_hashtagKeyboardDelegate;
- (id)hashtagSuggestionsForKey:(id)arg1;
- (void)associateHashtagSuggestion:(id)arg1 withKey:(id)arg2;
- (void)accountWasDeleted:(id)arg1;
- (void)crossAppHashtagDidChange:(id)arg1;
- (void)updateHashtagsAssociations;
- (id)checkForHashtagInString:(id)arg1 inRange:(struct _NSRange)arg2 selectionRange:(struct _NSRange)arg3 languageHasSpaces:(_Bool)arg4;
@property(readonly, nonatomic) unsigned long long maxLengthOfStringForCheckingHashtag;
- (void)updateNoteHashtags;
@property(readonly, nonatomic) _Bool allowsHashtag;
- (id)initWithNote:(id)arg1;

@end
