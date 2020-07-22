//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class NSDate, NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol>
{
    _Bool _statusChanged;
    _Bool _commentChanged;
    _Bool _proposedStartDateChanged;
    _Bool _proposedStartDateDeclined;
    _Bool _isCurrentUser;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    long long _participantStatus;
    NSString *_comment;
    NSDate *_proposedStartDate;
}

@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool proposedStartDateDeclined; // @synthesize proposedStartDateDeclined=_proposedStartDateDeclined;
@property(readonly, nonatomic) NSDate *proposedStartDate; // @synthesize proposedStartDate=_proposedStartDate;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(readonly, nonatomic) _Bool proposedStartDateChanged; // @synthesize proposedStartDateChanged=_proposedStartDateChanged;
@property(readonly, nonatomic) _Bool commentChanged; // @synthesize commentChanged=_commentChanged;
@property(readonly, nonatomic) _Bool statusChanged; // @synthesize statusChanged=_statusChanged;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithParticipant:(id)arg1 forEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

