//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying>
{
    long long _amount;
    NSString *_label;
    unsigned int _type;
    CDStruct_9fb36b4c _has;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasAmount;

@end
