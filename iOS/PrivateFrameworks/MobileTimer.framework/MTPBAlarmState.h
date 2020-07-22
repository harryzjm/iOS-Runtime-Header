//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class MTPBAlarm, NSMutableArray;

@interface MTPBAlarmState : PBCodable <NSCopying>
{
    double _lastModified;
    NSMutableArray *_alarms;
    MTPBAlarm *_sleepAlarm;
}

+ (Class)alarmsType;
@property(nonatomic) double lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) MTPBAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSleepAlarm;
- (id)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)addAlarms:(id)arg1;
- (void)clearAlarms;

@end
