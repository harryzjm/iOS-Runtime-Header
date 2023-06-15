//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REMListChangeItem;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderCalendar
{
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;
- (void).cxx_destruct;
- (id)image;
- (id)syncError;
- (id)sharedOwnerName;
- (_Bool)isColorDisplayOnly;
- (id)externalID;
- (id)symbolicColorName;
- (id)sharees;
- (id)allAlarms;
- (int)allowedEntities;
- (int)flags;
- (id)UUID;
- (int)displayOrder;
- (id)updateListWithSaveRequest:(id)arg1 error:(id *)arg2;
- (id)frozenReminderSource;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;
- (id)uniqueIdentifier;
- (id)_account;
- (id)source;
- (id)calendarIdentifier;
- (id)hexColorStringFromREMColor:(id)arg1;
- (id)REMColorFromEKHexColorString:(id)arg1;
- (id)publishURLString;
- (_Bool)isPublished;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)arg1;
- (unsigned long long)sharingStatus;
- (id)colorStringRaw;
- (id)unlocalizedTitle;
- (id)title;
- (id)remObjectID;
- (id)_list;
- (id)initNewListInStore:(id)arg1;

@end

