//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineFMCDailyAssessments : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_assessments;
    CDStruct_b5306035 _has;
}

+ (Class)assessmentType;
@property(retain, nonatomic) NSMutableArray *assessments; // @synthesize assessments=_assessments;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)assessmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)assessmentsCount;
- (void)addAssessment:(id)arg1;
- (void)clearAssessments;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

