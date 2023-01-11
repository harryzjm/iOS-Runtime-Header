//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSTopHitSearchQuery, EFMutableInt64Set, NSArray;

@interface EMSearchableIndexTopHitsQueryResult : NSObject
{
    CSTopHitSearchQuery *_topHitSearchQuery;
    NSArray *_foundItems;
    EFMutableInt64Set *_libraryIdentifiers;
}

@property(retain, nonatomic) EFMutableInt64Set *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(copy, nonatomic) NSArray *foundItems; // @synthesize foundItems=_foundItems;
@property(retain, nonatomic) CSTopHitSearchQuery *topHitSearchQuery; // @synthesize topHitSearchQuery=_topHitSearchQuery;
- (void).cxx_destruct;
- (long long)rankingIndexForConversationID:(id)arg1;
- (void)userDidInteractWithConversationID:(id)arg1;
- (id)conversationIDForLibraryIndex:(long long)arg1;
- (long long)rankingIndexForMessageLibraryID:(id)arg1;
- (void)userDidInteractWithLibraryIdentifier:(id)arg1;
- (id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2;

@end
