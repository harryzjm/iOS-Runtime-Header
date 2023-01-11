//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitPredicate, NSMutableArray;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying>
{
    int _activationState;
    int _activationType;
    NSMutableArray *_events;
    AWDHomeKitPredicate *_predicate;
    _Bool _containsRecurrences;
    _Bool _executeOnce;
    struct {
        unsigned int activationState:1;
        unsigned int activationType:1;
        unsigned int containsRecurrences:1;
        unsigned int executeOnce:1;
    } _has;
}

+ (Class)eventsType;
- (void).cxx_destruct;
@property(retain, nonatomic) AWDHomeKitPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsActivationType:(id)arg1;
- (id)activationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActivationType;
@property(nonatomic) int activationType; // @synthesize activationType=_activationType;
- (int)StringAsActivationState:(id)arg1;
- (id)activationStateAsString:(int)arg1;
@property(nonatomic) _Bool hasActivationState;
@property(nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) _Bool hasPredicate;
@property(nonatomic) _Bool hasContainsRecurrences;
@property(nonatomic) _Bool hasExecuteOnce;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;

@end
