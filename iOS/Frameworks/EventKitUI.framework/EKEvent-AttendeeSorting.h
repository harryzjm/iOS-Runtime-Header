//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (AttendeeSorting)
- (id)attendeesWithoutOrganizerAndLocations;
- (_Bool)hasHumanInviteesToDisplay;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
@end

