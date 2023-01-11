//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying>
{
    CDStruct_5df41632 _scores;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setScores:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)scoresAtIndex:(unsigned long long)arg1;
- (void)addScores:(long long)arg1;
- (void)clearScores;
@property(readonly, nonatomic) long long *scores;
@property(readonly, nonatomic) unsigned long long scoresCount;
- (void)dealloc;

@end

