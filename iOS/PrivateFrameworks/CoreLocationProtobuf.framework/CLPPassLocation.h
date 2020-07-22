//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPLocation, NSMutableArray, NSString;

@interface CLPPassLocation : PBCodable <NSCopying>
{
    double _age;
    NSMutableArray *_associatedStoreIds;
    CLPLocation *_location;
    int _passSource;
    NSString *_passTypeId;
    int _serverHash;
    struct {
        unsigned int age:1;
        unsigned int serverHash:1;
    } _has;
}

+ (Class)associatedStoreIdType;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int passSource; // @synthesize passSource=_passSource;
@property(retain, nonatomic) NSMutableArray *associatedStoreIds; // @synthesize associatedStoreIds=_associatedStoreIds;
@property(retain, nonatomic) NSString *passTypeId; // @synthesize passTypeId=_passTypeId;
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
@property(nonatomic) _Bool hasServerHash;
@property(nonatomic) _Bool hasAge;
- (id)associatedStoreIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedStoreIdsCount;
- (void)addAssociatedStoreId:(id)arg1;
- (void)clearAssociatedStoreIds;

@end
