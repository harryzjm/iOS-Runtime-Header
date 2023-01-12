//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchSearchIndex-Protocol.h>

@class CKVDatabaseSearcher, NSString;

@interface CKVSpanMatchFTS : NSObject <CKVSpanMatchSearchIndex>
{
    CKVDatabaseSearcher *_databaseSearcher;
}

- (void).cxx_destruct;
- (id)_preprocessTokenChain:(id)arg1;
- (id)_characterRangeFromTokenRange:(struct _NSRange)arg1 inTokenChain:(id)arg2;
- (_Bool)_shouldMergeSpanWithRange:(struct _NSRange)arg1 inTokenChain:(id)arg2 withSearchResult:(id)arg3;
- (id)_findLongestSpansMatchingResult:(id)arg1 withTokenIndexes:(id)arg2 ofTokenChain:(id)arg3;
- (void)_mapSearchResults:(id)arg1 toTokenIndex:(unsigned long long)arg2 withMap:(id)arg3;
- (id)_searchFTSForToken:(id)arg1 error:(id *)arg2;
- (id)locale;
- (id)searchIndexForTokenChain:(id)arg1;
- (id)init;
- (id)initWithDatabaseSearcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
