//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOStateTransitionFeedback : PBCodable <NSCopying>
{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct {
        unsigned int newValue:1;
        unsigned int oldValue:1;
        unsigned int stateType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsNewValue:(id)arg1;
- (id)newValueAsString:(int)arg1;
@property(nonatomic) _Bool hasNewValue;
@property(nonatomic) int newValue; // @synthesize newValue=_newValue;
- (int)StringAsOldValue:(id)arg1;
- (id)oldValueAsString:(int)arg1;
@property(nonatomic) _Bool hasOldValue;
@property(nonatomic) int oldValue; // @synthesize oldValue=_oldValue;
- (int)StringAsStateType:(id)arg1;
- (id)stateTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStateType;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;

@end

