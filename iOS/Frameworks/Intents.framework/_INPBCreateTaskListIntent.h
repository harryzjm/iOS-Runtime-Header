//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCreateTaskListIntent-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCreateTaskListIntent : PBCodable <_INPBCreateTaskListIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBDataString *_groupName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_taskTitles;
    _INPBDataString *_title;
}

+ (Class)taskTitlesType;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *taskTitles; // @synthesize taskTitles=_taskTitles;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long taskTitlesCount;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasGroupName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

