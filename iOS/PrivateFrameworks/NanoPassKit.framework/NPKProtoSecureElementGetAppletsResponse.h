//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _activationStates;
    CDStruct_9f2792e4 _lifecycleStates;
    NSMutableArray *_appletsBytes;
    NSMutableArray *_cardAIDs;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

+ (Class)appletsBytesType;
+ (Class)cardAIDsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *appletsBytes; // @synthesize appletsBytes=_appletsBytes;
@property(retain, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)appletsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appletsBytesCount;
- (void)addAppletsBytes:(id)arg1;
- (void)clearAppletsBytes;
- (void)setActivationStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)activationStatesAtIndex:(unsigned long long)arg1;
- (void)addActivationStates:(unsigned int)arg1;
- (void)clearActivationStates;
@property(readonly, nonatomic) unsigned int *activationStates;
@property(readonly, nonatomic) unsigned long long activationStatesCount;
- (void)setLifecycleStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (void)clearLifecycleStates;
@property(readonly, nonatomic) unsigned int *lifecycleStates;
@property(readonly, nonatomic) unsigned long long lifecycleStatesCount;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)addCardAIDs:(id)arg1;
- (void)clearCardAIDs;
@property(nonatomic) _Bool hasPending;
- (void)dealloc;

@end
