//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _UISearchBarTextFieldTokenCounter : NSObject
{
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

- (void).cxx_destruct;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1;
- (id)tokenAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange)arg1;
- (struct _NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeOfTextAfterLastToken;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange characterRangeOfAllTokens;
@property(readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
- (void)_handleProcessEditing;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange)arg1 toIndexSet:(id)arg2;
- (id)initWithTextStorage:(id)arg1;

@end

