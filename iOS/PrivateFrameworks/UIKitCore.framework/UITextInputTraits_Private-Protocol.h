//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory;
@protocol UITextInputTraits;

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>
- (void)takeTraitsFrom:(id <UITextInputTraits>)arg1;

@optional
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool hidePrediction;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(nonatomic) long long textScriptType;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool disableInputBars;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(copy, nonatomic) NSString *responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool deferBecomingResponder;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool hasDefaultContents;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) struct _NSRange validTextRange;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@end

