//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableChartSharableModel, NSMutableArray;

@interface HKCodableChartFeedItemData : PBCodable <NSCopying>
{
    HKCodableChartSharableModel *_chartModel;
    NSMutableArray *_trends;
}

+ (Class)trendsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *trends; // @synthesize trends=_trends;
@property(retain, nonatomic) HKCodableChartSharableModel *chartModel; // @synthesize chartModel=_chartModel;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trendsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendsCount;
- (void)addTrends:(id)arg1;
- (void)clearTrends;
@property(readonly, nonatomic) _Bool hasChartModel;

@end
