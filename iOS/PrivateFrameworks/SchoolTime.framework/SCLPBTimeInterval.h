//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SchoolTime/NSCopying-Protocol.h>

@class SCLPBScheduleTime;

@interface SCLPBTimeInterval : PBCodable <NSCopying>
{
    SCLPBScheduleTime *_endTime;
    SCLPBScheduleTime *_startTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCLPBScheduleTime *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) SCLPBScheduleTime *startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEndTime;
@property(readonly, nonatomic) _Bool hasStartTime;

@end
