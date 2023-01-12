//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWStateReason, NSData, NSString;

@interface FLOWSchemaFLOWState
{
    NSString *_currentTaskName;
    NSString *_currentTaskType;
    int _flowStateType;
    FLOWSchemaFLOWStateReason *_flowStateReason;
    NSString *_resolvedSlotName;
    struct {
        unsigned int flowStateType:1;
    } _has;
    _Bool _hasCurrentTaskName;
    _Bool _hasCurrentTaskType;
    _Bool _hasFlowStateReason;
    _Bool _hasResolvedSlotName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasResolvedSlotName; // @synthesize hasResolvedSlotName=_hasResolvedSlotName;
@property(nonatomic) _Bool hasFlowStateReason; // @synthesize hasFlowStateReason=_hasFlowStateReason;
@property(nonatomic) _Bool hasCurrentTaskType; // @synthesize hasCurrentTaskType=_hasCurrentTaskType;
@property(nonatomic) _Bool hasCurrentTaskName; // @synthesize hasCurrentTaskName=_hasCurrentTaskName;
@property(copy, nonatomic) NSString *resolvedSlotName; // @synthesize resolvedSlotName=_resolvedSlotName;
@property(retain, nonatomic) FLOWSchemaFLOWStateReason *flowStateReason; // @synthesize flowStateReason=_flowStateReason;
@property(nonatomic) int flowStateType; // @synthesize flowStateType=_flowStateType;
@property(copy, nonatomic) NSString *currentTaskType; // @synthesize currentTaskType=_currentTaskType;
@property(copy, nonatomic) NSString *currentTaskName; // @synthesize currentTaskName=_currentTaskName;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasFlowStateType;

@end
