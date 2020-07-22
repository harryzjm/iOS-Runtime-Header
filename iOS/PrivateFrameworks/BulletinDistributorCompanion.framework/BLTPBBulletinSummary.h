//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying>
{
    unsigned int _destinations;
    NSMutableArray *_keys;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

+ (Class)keyType;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(nonatomic) unsigned int destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
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
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keysCount;
- (void)addKey:(id)arg1;
- (void)clearKeys;
@property(readonly, nonatomic) _Bool hasRecordID;
@property(readonly, nonatomic) _Bool hasPublisherBulletinID;

@end

