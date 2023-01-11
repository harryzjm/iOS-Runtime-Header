//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriObservation/NSCopying-Protocol.h>
#import <SiriObservation/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_firingAlarmIDs;
    NSOrderedSet *_dismissedAlarmIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSOrderedSet *dismissedAlarmIDs; // @synthesize dismissedAlarmIDs=_dismissedAlarmIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *firingAlarmIDs; // @synthesize firingAlarmIDs=_firingAlarmIDs;
@property(readonly, copy, nonatomic) NSDictionary *alarmsByID; // @synthesize alarmsByID=_alarmsByID;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithDate:(id)arg1 alarmsByID:(id)arg2 firingAlarmIDs:(id)arg3 dismissedAlarmIDs:(id)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
