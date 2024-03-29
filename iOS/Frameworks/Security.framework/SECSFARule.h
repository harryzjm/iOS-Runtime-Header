//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SECSFAAction;

__attribute__((visibility("hidden")))
@interface SECSFARule : PBCodable
{
    long long _repeatAfterSeconds;
    SECSFAAction *_action;
    NSString *_eventType;
    NSData *_match;
    NSString *_process;
    struct {
        unsigned int repeatAfterSeconds:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *process; // @synthesize process=_process;
@property(nonatomic) long long repeatAfterSeconds; // @synthesize repeatAfterSeconds=_repeatAfterSeconds;
@property(retain, nonatomic) SECSFAAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSData *match; // @synthesize match=_match;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProcess;
@property(nonatomic) _Bool hasRepeatAfterSeconds;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) _Bool hasMatch;
@property(readonly, nonatomic) _Bool hasEventType;

@end

