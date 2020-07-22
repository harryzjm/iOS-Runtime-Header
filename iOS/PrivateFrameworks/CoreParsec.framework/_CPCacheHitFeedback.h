//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCacheHitFeedback-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPCacheHitFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPCacheHitFeedback, NSSecureCoding>
{
    CDStruct_c6e3878d _has;
    int _triggerEvent;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_uuid;
}

@property(copy, nonatomic) NSString *uuid;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(readonly, nonatomic) _Bool hasInput;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
@property(readonly, nonatomic) _Bool requiresQueryId;
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2 uuid:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end
