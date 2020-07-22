//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICSearchResultRanker : NSObject
{
}

+ (_Bool)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2;
+ (id)rankingRules;
+ (CDUnknownBlockType)bodyOfNoteOrAttachmentMatchingRule;
+ (CDUnknownBlockType)participantNameOrEmailMatchingRule;
+ (CDUnknownBlockType)titleOfNoteOrAttachmentMatchingRule;
+ (id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(_Bool)arg2;
+ (id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2;
+ (id)relevanceBitFieldForSearchableItems:(id)arg1;

@end

