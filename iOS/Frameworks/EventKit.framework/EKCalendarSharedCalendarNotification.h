//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EKCalendarSharedCalendarNotification
{
    unsigned long long _sharingInvitationResponse;
    unsigned long long _allowedEntityTypes;
}

@property(nonatomic) unsigned long long allowedEntityTypes; // @synthesize allowedEntityTypes=_allowedEntityTypes;
@property(nonatomic) unsigned long long sharingInvitationResponse; // @synthesize sharingInvitationResponse=_sharingInvitationResponse;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(long long)arg1;

@end
