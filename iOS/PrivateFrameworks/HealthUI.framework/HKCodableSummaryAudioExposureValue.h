//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableQuantity;

@interface HKCodableSummaryAudioExposureValue : PBCodable <NSCopying>
{
    long long _daysAggregated;
    double _lastUpdatedDateData;
    double _secondsListened;
    HKCodableQuantity *_leqQuantity;
    struct {
        unsigned int daysAggregated:1;
        unsigned int lastUpdatedDateData:1;
        unsigned int secondsListened:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double lastUpdatedDateData; // @synthesize lastUpdatedDateData=_lastUpdatedDateData;
@property(nonatomic) long long daysAggregated; // @synthesize daysAggregated=_daysAggregated;
@property(nonatomic) double secondsListened; // @synthesize secondsListened=_secondsListened;
@property(retain, nonatomic) HKCodableQuantity *leqQuantity; // @synthesize leqQuantity=_leqQuantity;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLastUpdatedDateData;
@property(nonatomic) _Bool hasDaysAggregated;
@property(nonatomic) _Bool hasSecondsListened;
@property(readonly, nonatomic) _Bool hasLeqQuantity;

@end
