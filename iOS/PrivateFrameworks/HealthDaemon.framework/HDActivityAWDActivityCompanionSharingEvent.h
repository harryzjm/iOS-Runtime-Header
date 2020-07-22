//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <NSCopying>
{
    long long _numberOfFriends;
    long long _numberOfFriendsAwaitingResponse;
    long long _numberOfFriendsHiddenFromMe;
    long long _numberOfFriendsMuted;
    long long _numberOfFriendsMyDataHidden;
    long long _numberOfFriendsPendingMyResponse;
    unsigned long long _timestamp;
    int _maxFriendDuration;
    int _medianFriendDuration;
    int _minFriendDuration;
    struct {
        unsigned int numberOfFriends:1;
        unsigned int numberOfFriendsAwaitingResponse:1;
        unsigned int numberOfFriendsHiddenFromMe:1;
        unsigned int numberOfFriendsMuted:1;
        unsigned int numberOfFriendsMyDataHidden:1;
        unsigned int numberOfFriendsPendingMyResponse:1;
        unsigned int timestamp:1;
        unsigned int maxFriendDuration:1;
        unsigned int medianFriendDuration:1;
        unsigned int minFriendDuration:1;
    } _has;
}

@property(nonatomic) long long numberOfFriendsPendingMyResponse; // @synthesize numberOfFriendsPendingMyResponse=_numberOfFriendsPendingMyResponse;
@property(nonatomic) long long numberOfFriendsAwaitingResponse; // @synthesize numberOfFriendsAwaitingResponse=_numberOfFriendsAwaitingResponse;
@property(nonatomic) long long numberOfFriendsMuted; // @synthesize numberOfFriendsMuted=_numberOfFriendsMuted;
@property(nonatomic) long long numberOfFriendsHiddenFromMe; // @synthesize numberOfFriendsHiddenFromMe=_numberOfFriendsHiddenFromMe;
@property(nonatomic) long long numberOfFriendsMyDataHidden; // @synthesize numberOfFriendsMyDataHidden=_numberOfFriendsMyDataHidden;
@property(nonatomic) long long numberOfFriends; // @synthesize numberOfFriends=_numberOfFriends;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumberOfFriendsPendingMyResponse;
@property(nonatomic) _Bool hasNumberOfFriendsAwaitingResponse;
@property(nonatomic) _Bool hasNumberOfFriendsMuted;
@property(nonatomic) _Bool hasNumberOfFriendsHiddenFromMe;
@property(nonatomic) _Bool hasNumberOfFriendsMyDataHidden;
- (int)StringAsMaxFriendDuration:(id)arg1;
- (id)maxFriendDurationAsString:(int)arg1;
@property(nonatomic) _Bool hasMaxFriendDuration;
@property(nonatomic) int maxFriendDuration; // @synthesize maxFriendDuration=_maxFriendDuration;
- (int)StringAsMinFriendDuration:(id)arg1;
- (id)minFriendDurationAsString:(int)arg1;
@property(nonatomic) _Bool hasMinFriendDuration;
@property(nonatomic) int minFriendDuration; // @synthesize minFriendDuration=_minFriendDuration;
- (int)StringAsMedianFriendDuration:(id)arg1;
- (id)medianFriendDurationAsString:(int)arg1;
@property(nonatomic) _Bool hasMedianFriendDuration;
@property(nonatomic) int medianFriendDuration; // @synthesize medianFriendDuration=_medianFriendDuration;
@property(nonatomic) _Bool hasNumberOfFriends;
@property(nonatomic) _Bool hasTimestamp;

@end

