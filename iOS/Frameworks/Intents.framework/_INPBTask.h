//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTask-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int priority:1;
        unsigned int status:1;
        unsigned int taskReference:1;
        unsigned int taskType:1;
    } _has;
    int _priority;
    int _status;
    int _taskReference;
    int _taskType;
    _INPBContactEventTrigger *_contactEventTrigger;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSString *_parentIdentifier;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(nonatomic) int taskReference; // @synthesize taskReference=_taskReference;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property(retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger; // @synthesize contactEventTrigger=_contactEventTrigger;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
- (int)StringAsTaskType:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTaskType;
- (int)StringAsTaskReference:(id)arg1;
- (id)taskReferenceAsString:(int)arg1;
@property(nonatomic) _Bool hasTaskReference;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
- (int)StringAsPriority:(id)arg1;
- (id)priorityAsString:(int)arg1;
@property(nonatomic) _Bool hasPriority;
@property(readonly, nonatomic) _Bool hasParentIdentifier;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(readonly, nonatomic) _Bool hasContactEventTrigger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
