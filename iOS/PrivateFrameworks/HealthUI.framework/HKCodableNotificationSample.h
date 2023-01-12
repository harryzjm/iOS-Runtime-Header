//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableMetadataDictionary;

@interface HKCodableNotificationSample : PBCodable <NSCopying>
{
    long long _categoryValue;
    long long _dataType;
    double _endDate;
    long long _latestSupportedVersion;
    long long _minimumSupportedVersion;
    double _startDate;
    HKCodableMetadataDictionary *_metadataDictionary;
    struct {
        unsigned int categoryValue:1;
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int latestSupportedVersion:1;
        unsigned int minimumSupportedVersion:1;
        unsigned int startDate:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(nonatomic) long long latestSupportedVersion; // @synthesize latestSupportedVersion=_latestSupportedVersion;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) long long categoryValue; // @synthesize categoryValue=_categoryValue;
@property(retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMinimumSupportedVersion;
@property(nonatomic) _Bool hasLatestSupportedVersion;
@property(nonatomic) _Bool hasDataType;
@property(nonatomic) _Bool hasCategoryValue;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end
