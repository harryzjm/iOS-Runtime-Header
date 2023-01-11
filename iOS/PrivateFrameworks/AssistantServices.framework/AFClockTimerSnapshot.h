//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface AFClockTimerSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *notifiedFiringTimerIDs; // @synthesize notifiedFiringTimerIDs=_notifiedFiringTimerIDs;
@property(readonly, copy, nonatomic) NSDictionary *timersByID; // @synthesize timersByID=_timersByID;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 timersByID:(id)arg3 notifiedFiringTimerIDs:(id)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

