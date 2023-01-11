//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DACalDAV/DACalDAViCalItemBackingModel-Protocol.h>
#import <DACalDAV/DACalDAViCalItemUpdatableBackingModel-Protocol.h>

@class NSString, REMObjectID;

@interface DACalDAVREMReminderProxy : NSObject <DACalDAViCalItemUpdatableBackingModel, DACalDAViCalItemBackingModel>
{
    REMObjectID *objectID;
    NSString *daCalendarItemUniqueIdentifier;
    NSString *externalModificationTag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // @synthesize daCalendarItemUniqueIdentifier;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID;
@property(readonly, copy) NSString *description;
- (void)updatePropertiesWithReminder:(id)arg1;
- (id)updatableBackingModel;
- (id)initWithReminder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
