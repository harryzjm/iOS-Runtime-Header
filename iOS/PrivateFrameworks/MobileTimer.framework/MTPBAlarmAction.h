//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class NSString;

@interface MTPBAlarmAction : PBCodable <NSCopying>
{
    double _actionDate;
    double _triggerDate;
    unsigned int _action;
    NSString *_alarmID;
    unsigned int _triggerType;
}

@property(nonatomic) double triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic) unsigned int triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) double actionDate; // @synthesize actionDate=_actionDate;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
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

@end

