//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class GEOSharedNavState, NSMutableArray, NSString, PBUnknownFields;

@interface MSPGroupSessionStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _lastUpdateTimestamp;
    NSString *_fromID;
    NSString *_groupIdentifier;
    NSMutableArray *_liveStrategyIdentifiers;
    NSMutableArray *_messageStrategyIdentifiers;
    NSMutableArray *_minimalStrategyIdentifiers;
    NSString *_originatorIdentifier;
    NSString *_receivingAccountIdentifier;
    NSString *_receivingHandle;
    GEOSharedNavState *_state;
    struct {
        unsigned int lastUpdateTimestamp:1;
    } _has;
}

+ (Class)messageStrategyIdentifierType;
+ (Class)liveStrategyIdentifierType;
+ (Class)minimalStrategyIdentifierType;
+ (id)groupStorageWithIdentifier:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *receivingAccountIdentifier; // @synthesize receivingAccountIdentifier=_receivingAccountIdentifier;
@property(retain, nonatomic) NSString *receivingHandle; // @synthesize receivingHandle=_receivingHandle;
@property(retain, nonatomic) NSMutableArray *messageStrategyIdentifiers; // @synthesize messageStrategyIdentifiers=_messageStrategyIdentifiers;
@property(retain, nonatomic) NSMutableArray *liveStrategyIdentifiers; // @synthesize liveStrategyIdentifiers=_liveStrategyIdentifiers;
@property(retain, nonatomic) NSMutableArray *minimalStrategyIdentifiers; // @synthesize minimalStrategyIdentifiers=_minimalStrategyIdentifiers;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(retain, nonatomic) GEOSharedNavState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *originatorIdentifier; // @synthesize originatorIdentifier=_originatorIdentifier;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReceivingAccountIdentifier;
@property(readonly, nonatomic) _Bool hasReceivingHandle;
- (id)messageStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageStrategyIdentifiersCount;
- (void)addMessageStrategyIdentifier:(id)arg1;
- (void)clearMessageStrategyIdentifiers;
- (id)liveStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)liveStrategyIdentifiersCount;
- (void)addLiveStrategyIdentifier:(id)arg1;
- (void)clearLiveStrategyIdentifiers;
- (id)minimalStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)minimalStrategyIdentifiersCount;
- (void)addMinimalStrategyIdentifier:(id)arg1;
- (void)clearMinimalStrategyIdentifiers;
@property(readonly, nonatomic) _Bool hasFromID;
@property(nonatomic) _Bool hasLastUpdateTimestamp;
@property(readonly, nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasOriginatorIdentifier;
@property(readonly, nonatomic) _Bool hasGroupIdentifier;
- (void)updateWithState:(id)arg1;

@end
