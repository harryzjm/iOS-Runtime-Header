//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> _match;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float weight;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_a2762e75 *)arg1 userInput:(id)arg2;

@end

