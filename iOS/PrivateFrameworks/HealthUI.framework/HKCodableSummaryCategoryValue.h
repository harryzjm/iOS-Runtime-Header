//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@interface HKCodableSummaryCategoryValue : PBCodable <NSCopying>
{
    long long _categoryValue;
    double _dateData;
    struct {
        unsigned int categoryValue:1;
        unsigned int dateData:1;
    } _has;
}

@property(nonatomic) double dateData; // @synthesize dateData=_dateData;
@property(nonatomic) long long categoryValue; // @synthesize categoryValue=_categoryValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDateData;
@property(nonatomic) _Bool hasCategoryValue;

@end
