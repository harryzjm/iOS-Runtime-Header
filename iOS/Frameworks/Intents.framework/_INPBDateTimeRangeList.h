//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTimeRangeList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBDateTimeRangeList : PBCodable <_INPBDateTimeRangeList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_dateRanges;
}

+ (Class)dateRangeType;
@property(copy, nonatomic) NSArray *dateRanges; // @synthesize dateRanges=_dateRanges;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dateRangeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dateRangesCount;
- (void)addDateRange:(id)arg1;
- (void)clearDateRanges;
@property(readonly, nonatomic) _Bool hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

