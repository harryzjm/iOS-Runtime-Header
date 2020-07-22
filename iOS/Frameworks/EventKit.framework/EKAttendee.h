//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface EKAttendee
{
}

+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1;
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2;
+ (id)attendeeWithName:(id)arg1 url:(id)arg2;
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (Class)frozenClass;
- (void)markAsForward;
@property(nonatomic) _Bool proposedStartDateChanged;
@property(nonatomic) _Bool statusChanged;
@property(nonatomic) _Bool commentChanged;
- (_Bool)_valueForFlag:(unsigned int)arg1;
- (void)_setFlag:(unsigned int)arg1 value:(_Bool)arg2;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (_Bool)isCurrentUser;
@property(readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property(nonatomic) long long participantType;
@property(nonatomic) long long pendingStatus;
- (void)setPendingStatusRaw:(int)arg1;
- (int)pendingStatusRaw;
@property(nonatomic) long long participantRole;
- (_Bool)_isParticipantStatusDirty;
@property(nonatomic) long long participantStatus;
- (void)setStatusRaw:(int)arg1;
- (int)statusRaw;
- (id)owner;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
