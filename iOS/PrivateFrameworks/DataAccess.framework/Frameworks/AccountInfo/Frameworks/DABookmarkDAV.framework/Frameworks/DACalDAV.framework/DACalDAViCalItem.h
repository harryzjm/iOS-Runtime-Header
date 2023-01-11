//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DACalDAV/CalDAVCalendarItemProtocol-Protocol.h>
#import <DACalDAV/CoreDAVLeafDataPayload-Protocol.h>
#import <DACalDAV/DADataElement-Protocol.h>

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, ICSDocument, NSArray, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol>
{
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
    NSData *_dataPayload;
    _Bool _isMigrate;
    _Bool _statusChanged;
    NSString *_syncKey;
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;
    NSURL *_serverID;
    NSNumber *_clientID;
    void *_calItem;
    ICSDocument *_document;
    CalDAVUpdateOwnerItem *_createdBy;
    CalDAVUpdateOwnerItem *_updatedBy;
    NSString *_uniqueIdentifier;
    NSString *_filename;
}

+ (_Bool)_shouldApplyTodoFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (_Bool)_shouldApplyEventFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (_Bool)_checkOccurrencesForEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
+ (_Bool)_shouldApplyEvent:(id)arg1 instanceWithStartDate:(id)arg2 startRange:(id)arg3 endRange:(id)arg4;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) _Bool statusChanged; // @synthesize statusChanged=_statusChanged;
@property(nonatomic) _Bool isMigrate; // @synthesize isMigrate=_isMigrate;
@property(retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // @synthesize updatedBy=_updatedBy;
@property(retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) ICSDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) void *calItem; // @synthesize calItem=_calItem;
@property(retain, nonatomic) NSNumber *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSURL *serverID; // @synthesize serverID=_serverID;
@property(retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
- (void).cxx_destruct;
- (_Bool)deleteFromContainer:(void *)arg1;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (void *)localItem;
@property(readonly, nonatomic) _Bool invitationStatusCleared;
@property(retain, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
- (void)_fixUpCalendarForServer:(id)arg1;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5 calendar:(id)arg6;
- (_Bool)_addOrModifyTask:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;
- (_Bool)_addOrModifyEvent:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;
- (void)_removeDetachedEventsWithUniqueIdentifiers:(id)arg1 fromEvent:(void *)arg2 withContainer:(void *)arg3;
- (void)_removeCalEvent:(void *)arg1 fromUniqueIdentifiersSet:(id)arg2;
- (id)_getDetachedEventUniqueIdentifiersForCalEvent:(void *)arg1;
- (void)_setModificationInfoOnItem:(void *)arg1;
- (void)addChangeOfType:(id)arg1 forChangeRowid:(int)arg2;
@property(copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property(retain, nonatomic) NSString *scheduleTag;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithCalRecord:(void *)arg1 inContainer:(id)arg2;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *childrenOrder;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSURL *destinationURL;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *sourceURL;
@property(readonly) Class superclass;

@end

