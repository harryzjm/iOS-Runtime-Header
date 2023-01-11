//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying>
{
    HMPBServiceReference *_serviceReference;
    NSData *_uniqueIdentifier;
}

+ (id)characteristicReferenceWithCharacteristic:(id)arg1;
+ (id)characteristicReferenceWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMPBServiceReference *serviceReference; // @synthesize serviceReference=_serviceReference;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasServiceReference;

@end
