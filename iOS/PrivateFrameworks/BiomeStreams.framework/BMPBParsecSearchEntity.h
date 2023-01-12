//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBParsecSearchEntity : PBCodable <NSCopying>
{
    unsigned int _category;
    NSString *_name;
    float _probabilityScore;
    NSMutableArray *_topics;
    struct {
        unsigned int category:1;
        unsigned int probabilityScore:1;
    } _has;
}

+ (Class)topicsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) float probabilityScore; // @synthesize probabilityScore=_probabilityScore;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;
@property(nonatomic) _Bool hasProbabilityScore;
@property(nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasName;

@end
