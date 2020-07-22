//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class CKMessageEntryTextViewAccessibility, NSString;

@interface AXEmojiConversionCandidateElement : UIAccessibilityElement
{
    CKMessageEntryTextViewAccessibility *_textView;
    NSString *_candidateString;
    id _candidateEmojiList;
    NSString *_conversionLanguage;
    unsigned long long _currentIndex;
    struct _NSRange _candidateRange;
}

@property(readonly, nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSString *conversionLanguage; // @synthesize conversionLanguage=_conversionLanguage;
@property(copy, nonatomic) id candidateEmojiList; // @synthesize candidateEmojiList=_candidateEmojiList;
@property(nonatomic) struct _NSRange candidateRange; // @synthesize candidateRange=_candidateRange;
@property(copy, nonatomic) NSString *candidateString; // @synthesize candidateString=_candidateString;
@property(retain, nonatomic) CKMessageEntryTextViewAccessibility *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)selectEmoji:(id)arg1;
@property(readonly, nonatomic) id currentEmoji;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)candidateEmojiArray;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;

@end
