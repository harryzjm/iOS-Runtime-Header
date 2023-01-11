//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface EKPersistentAttendee
{
}

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (id)lastModifiedParticipationStatus;
- (void)setLastModifiedParticipationStatus:(id)arg1;
- (void)setPendingStatusRaw:(int)arg1;
- (int)pendingStatusRaw;
@property(nonatomic) long long participantType; // @dynamic participantType;
@property(nonatomic) long long participantRole; // @dynamic participantRole;
@property(nonatomic) int statusRaw; // @dynamic statusRaw;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)entityType;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool commentChanged; // @dynamic commentChanged;
@property(copy, nonatomic) NSDate *lastModified; // @dynamic lastModified;
@property(nonatomic) int pendingStatus; // @dynamic pendingStatus;
@property(nonatomic) _Bool proposedStartDateChanged; // @dynamic proposedStartDateChanged;
@property(nonatomic) _Bool statusChanged; // @dynamic statusChanged;

@end
