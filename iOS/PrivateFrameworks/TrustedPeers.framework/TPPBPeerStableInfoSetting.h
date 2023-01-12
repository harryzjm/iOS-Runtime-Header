//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@interface TPPBPeerStableInfoSetting : PBCodable <NSCopying>
{
    unsigned long long _clock;
    _Bool _value;
    struct {
        unsigned int clock:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasClock;

@end
