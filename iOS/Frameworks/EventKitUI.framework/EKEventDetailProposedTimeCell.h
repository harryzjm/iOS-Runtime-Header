//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, EKEventDetailsHighlightControl, UIView;

__attribute__((visibility("hidden")))
@interface EKEventDetailProposedTimeCell : EKEventDetailCell
{
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    UIView *_topSeparator;
    EKEvent *_event;
    UIView *_bgView;
    _Bool _showsTopSeparator;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
- (_Bool)update;
- (_Bool)shouldDisplayForEvent;
- (_Bool)hasCustomLayout;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;

@end

