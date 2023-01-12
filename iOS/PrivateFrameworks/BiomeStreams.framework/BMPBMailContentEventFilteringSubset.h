//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBMailContentEventFilteringSubset : PBCodable <NSCopying>
{
    NSString *_domainId;
    NSString *_uniqueId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end
