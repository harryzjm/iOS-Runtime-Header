//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_gkFirstObject;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkInternalsFromPlayers;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkNonGuestPlayersFromPlayers;
@end

