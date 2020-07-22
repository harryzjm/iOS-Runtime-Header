//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKParticipant, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem
{
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    long long _numberOfConflicts;
}

+ (id)_noneInviteesLocalizedString;
- (void).cxx_destruct;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)init;

@end

