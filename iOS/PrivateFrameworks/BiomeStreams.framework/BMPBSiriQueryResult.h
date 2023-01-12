//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBSiriQueryResult : PBCodable <NSCopying>
{
    double _confidence;
    NSString *_domain;
    NSString *_qid;
    struct {
        unsigned int confidence:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasConfidence;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasQid;

@end
