//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable
{
    NSMutableArray *_recordVersions;
    _Bool _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

+ (Class)recordVersionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recordVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordVersionsCount;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
@property(nonatomic) _Bool hasIsDeleted;

@end

