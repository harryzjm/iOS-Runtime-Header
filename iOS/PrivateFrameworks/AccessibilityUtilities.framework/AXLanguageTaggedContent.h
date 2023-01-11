//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject
{
    NSArray *_currentDialects;
    struct _NSRange _currentChunk;
    _Bool _predictedByTagger;
    _Bool _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
    NSMutableOrderedSet *_predictedSecondaryLangMaps;
    NSString *_contentString;
}

@property(retain, nonatomic) NSArray *currentDialects; // @synthesize currentDialects=_currentDialects;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps; // @synthesize predictedSecondaryLangMaps=_predictedSecondaryLangMaps;
@property(copy, nonatomic) NSString *userPreferredLangID; // @synthesize userPreferredLangID=_userPreferredLangID;
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps; // @synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps;
@property(nonatomic, getter=isTagged) _Bool tagged; // @synthesize tagged=_tagged;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)updateTagsForLocalePrefChange;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg1;
- (_Bool)hasOnlyNonWesternLangMaps;
- (_Bool)hasOnlyWesternLangMaps;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (id)significantAmbiguousLangMaps;
- (_Bool)langMapIsSignificant:(id)arg1;
- (_Bool)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)tagContent;
- (_Bool)_addLanguageTagForCurrentChunk;
- (CDStruct_3a8d9e70 *)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (id)_allLangIDs;
- (int)langIDforLangCode:(id)arg1;
- (id)langCodeForlangId:(int)arg1;
- (void)enumeratePredictedTags:(CDUnknownBlockType)arg1;
- (void)enumerateUnpredictedTags:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *content;
- (id)description;
- (id)initWithContent:(id)arg1;

@end

