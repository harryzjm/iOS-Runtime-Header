//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKPlayer, GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject
{
    GKTurnBasedParticipantInternal *_internal;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)matchOutcomeIsValidForDoneState:(long long)arg1;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (id)stringForMatchOutcome:(long long)arg1 totalParticipant:(long long)arg2;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingStatus;
- (void).cxx_destruct;
@property(readonly) GKTurnBasedParticipantInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) _Bool isLocalPlayer;
- (id)playerID;
@property(readonly, nonatomic) GKPlayer *player; // @dynamic player;
@property(readonly, nonatomic) GKPlayer *invitedBy; // @dynamic invitedBy;
@property(copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, nonatomic) _Bool isWinner;
- (id)matchOutcomeString:(long long)arg1;
- (id)matchOutcomeStringForLocalPlayer:(long long)arg1;
- (id)basicMatchOutcomeString:(long long)arg1;
@property(readonly, nonatomic) NSString *matchStatusString;
- (void)setStatus:(long long)arg1;
@property(readonly, nonatomic) long long status;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;
@property(nonatomic) long long matchOutcome; // @dynamic matchOutcome;
@property(copy, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end
