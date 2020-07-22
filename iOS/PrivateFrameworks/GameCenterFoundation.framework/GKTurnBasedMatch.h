//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/GKSessionDelegate-Protocol.h>

@class GKGame, GKPlayer, GKTurnBasedMatchInternal, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate>
{
    unsigned int _state;
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
}

+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTurnBasedMatchSummaries:(CDUnknownBlockType)arg1;
+ (void)loadMatchesIncludingCompatibleBundleID:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadMatchesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)getTurnBasedBadgeCountWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
@property(readonly, retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)exchangeForID:(id)arg1;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)indexesForParticipants:(id)arg1;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)loadURLWithMatchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadMatchDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSArray *completedExchanges;
@property(readonly, retain, nonatomic) NSArray *activeExchanges;
@property(readonly, nonatomic) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property(readonly, nonatomic) GKPlayer *showcasePlayer;
@property(readonly, nonatomic) GKTurnBasedParticipant *localPlayerParticipant;
@property(readonly, nonatomic) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property(readonly, nonatomic) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property(readonly, nonatomic) GKTurnBasedParticipant *previousParticipant;
@property(retain, nonatomic) GKTurnBasedParticipant *currentParticipant;
- (void)declineInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDate *dateSortKey;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) long long status; // @dynamic status;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GKPlayer *currentPlayer; // @dynamic currentPlayer;
- (void)dealloc;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
@property(copy, nonatomic) NSString *message;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) GKGame *game; // @dynamic game;
@property(readonly, nonatomic) _Bool localPlayerHasRecentTurn;
@property(readonly, nonatomic) _Bool isMyTurn; // @dynamic isMyTurn;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
@property(retain) GKTurnBasedMatchInternal *internal; // @synthesize internal=_internal;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
@property(readonly, nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; // @dynamic exchangeMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned long long exchangeDataMaximumSize; // @dynamic exchangeDataMaximumSize;
@property(nonatomic) unsigned long long matchDataMaximumSize; // @dynamic matchDataMaximumSize;

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, retain, nonatomic) NSData *matchData; // @dynamic matchData;
@property(readonly, retain, nonatomic) NSString *matchID; // @dynamic matchID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long turnNumber; // @dynamic turnNumber;

@end

