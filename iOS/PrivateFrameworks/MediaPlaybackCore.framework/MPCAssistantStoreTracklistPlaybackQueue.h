//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPIdentifierSet, NSArray;

@interface MPCAssistantStoreTracklistPlaybackQueue
{
    NSArray *_storeItemIDs;
    long long _shuffleType;
    MPIdentifierSet *_collectionIdentifierSet;
}

+ (id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet; // @synthesize collectionIdentifierSet=_collectionIdentifierSet;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) NSArray *storeItemIDs; // @synthesize storeItemIDs=_storeItemIDs;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;

@end
