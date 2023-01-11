//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBHomeReference, NSData;

@interface HMPBAccessoryReference : PBCodable <NSCopying>
{
    HMPBHomeReference *_homeReference;
    NSData *_uniqueIdentifier;
}

+ (id)accessoryReferenceWithAccessory:(id)arg1;
+ (id)accessoryReferenceWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMPBHomeReference *homeReference; // @synthesize homeReference=_homeReference;
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
@property(readonly, nonatomic) _Bool hasHomeReference;

@end
