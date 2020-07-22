//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SGInMemoryAdapter : NSObject <SGJournalCalendarObserver, SGJournalContactsObserver>
{
    NSMutableArray *_events;
    NSMutableDictionary *_contacts;
}

- (void).cxx_destruct;
- (void)removeAllStoredPseudoContacts;
- (void)calendarDeleted;
@property(readonly, nonatomic) NSArray *contacts;
@property(readonly, nonatomic) NSArray *events;
- (void)overwriteEvent:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)orphanEvent:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (void)cancelEvent:(id)arg1;
- (void)addContact:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
