//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKUIInviteesViewSection-Protocol.h>

@class EKEvent, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EKUIInviteesViewAddInviteesSection : NSObject <EKUIInviteesViewSection>
{
    _Bool _canSeeAttendeeStatuses;
    _Bool _showPending;
    NSArray *_pendingParticipants;
    CDUnknownBlockType _participantTapped;
    CDUnknownBlockType _participantRemoved;
    CDUnknownBlockType _addInviteesTapped;
    CDUnknownBlockType _sendInvitesTapped;
    NSMutableArray *_participants;
    EKEvent *_event;
    NSString *_cachedInviteeCellReuseIdentifier;
    NSString *_cachedAddInviteeCellReuseIdentifier;
    NSString *_cachedSendInviteCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToAvailabilityType;
    NSMutableDictionary *_participantAddressesToParticipantIndex;
    NSMutableSet *_participantAddressesForInFlightAvailabilityOperations;
    CDUnknownBlockType _tableViewCellHook;
}

+ (id)_participantAddressForParticipant:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;
@property(retain, nonatomic) NSMutableSet *participantAddressesForInFlightAvailabilityOperations; // @synthesize participantAddressesForInFlightAvailabilityOperations=_participantAddressesForInFlightAvailabilityOperations;
@property(retain, nonatomic) NSMutableDictionary *participantAddressesToParticipantIndex; // @synthesize participantAddressesToParticipantIndex=_participantAddressesToParticipantIndex;
@property(retain, nonatomic) NSMutableDictionary *participantAddressesToAvailabilityType; // @synthesize participantAddressesToAvailabilityType=_participantAddressesToAvailabilityType;
@property(retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // @synthesize availabilityRequestsQueue=_availabilityRequestsQueue;
@property(nonatomic) _Bool showPending; // @synthesize showPending=_showPending;
@property(nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property(retain, nonatomic) NSString *cachedSendInviteCellReuseIdentifier; // @synthesize cachedSendInviteCellReuseIdentifier=_cachedSendInviteCellReuseIdentifier;
@property(retain, nonatomic) NSString *cachedAddInviteeCellReuseIdentifier; // @synthesize cachedAddInviteeCellReuseIdentifier=_cachedAddInviteeCellReuseIdentifier;
@property(retain, nonatomic) NSString *cachedInviteeCellReuseIdentifier; // @synthesize cachedInviteeCellReuseIdentifier=_cachedInviteeCellReuseIdentifier;
@property(nonatomic) _Bool canSeeAttendeeStatuses; // @synthesize canSeeAttendeeStatuses=_canSeeAttendeeStatuses;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) CDUnknownBlockType sendInvitesTapped; // @synthesize sendInvitesTapped=_sendInvitesTapped;
@property(copy, nonatomic) CDUnknownBlockType addInviteesTapped; // @synthesize addInviteesTapped=_addInviteesTapped;
@property(copy, nonatomic) CDUnknownBlockType participantRemoved; // @synthesize participantRemoved=_participantRemoved;
@property(copy, nonatomic) CDUnknownBlockType participantTapped; // @synthesize participantTapped=_participantTapped;
@property(retain, nonatomic) NSArray *pendingParticipants; // @synthesize pendingParticipants=_pendingParticipants;
- (void).cxx_destruct;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (_Bool)_isSendInviteRow:(long long)arg1;
- (_Bool)_isAddInviteesRow:(long long)arg1;
- (_Bool)_isValidRow:(long long)arg1;
- (_Bool)hasPendingParticipants;
- (void)_removeParticipantAtIndexPath:(id)arg1;
- (_Bool)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;
- (void)updateWithEvent:(id)arg1 showPending:(_Bool)arg2;
- (void)cancelOutstandingOperations;
- (double)estimatedHeightForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (void)selectRow:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (unsigned long long)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (id)headerTitle;
- (id)debugTitle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

