//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_familyPhotos;
    NSMutableArray *_familyPhotosIDs;
    _Bool _success;
    CDStruct_f2ecb737 _has;
}

+ (Class)familyPhotosType;
+ (Class)familyPhotosIDsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *familyPhotos; // @synthesize familyPhotos=_familyPhotos;
@property(retain, nonatomic) NSMutableArray *familyPhotosIDs; // @synthesize familyPhotosIDs=_familyPhotosIDs;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)familyPhotosAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosCount;
- (void)addFamilyPhotos:(id)arg1;
- (void)clearFamilyPhotos;
- (id)familyPhotosIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosIDsCount;
- (void)addFamilyPhotosIDs:(id)arg1;
- (void)clearFamilyPhotosIDs;
@property(nonatomic) _Bool hasSuccess;

@end
