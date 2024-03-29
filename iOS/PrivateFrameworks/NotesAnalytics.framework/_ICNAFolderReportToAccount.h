//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _ICNAFolderReportToAccount : NSObject
{
    int _folderCollaborationMatrix[3][3];
    unsigned long long _countOfFolders;
    unsigned long long _countOfCustomSmartFolders;
    unsigned long long _countOfSmartFoldersWithTagsFilter;
    unsigned long long _countOfSmartFoldersWithDateCreatedFilter;
    unsigned long long _countOfSmartFoldersWithDateModifiedFilter;
    unsigned long long _countOfSmartFoldersWithSharedFilter;
    unsigned long long _countOfSmartFoldersWithMentionsFilter;
    unsigned long long _countOfSmartFoldersWithChecklistsFilter;
    unsigned long long _countOfSmartFoldersWithAttachmentsFilter;
    unsigned long long _countOfSmartFoldersWithFoldersFilter;
    unsigned long long _countOfSmartFoldersWithQuickNotesFilter;
    unsigned long long _countOfSmartFoldersWithPinnedNotesFilter;
    unsigned long long _countOfSmartFoldersWithLockedNotesFilter;
    unsigned long long _countOfSmartFoldersWithUnknownFilter;
}

@property(nonatomic) unsigned long long countOfSmartFoldersWithUnknownFilter; // @synthesize countOfSmartFoldersWithUnknownFilter=_countOfSmartFoldersWithUnknownFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithLockedNotesFilter; // @synthesize countOfSmartFoldersWithLockedNotesFilter=_countOfSmartFoldersWithLockedNotesFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithPinnedNotesFilter; // @synthesize countOfSmartFoldersWithPinnedNotesFilter=_countOfSmartFoldersWithPinnedNotesFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithQuickNotesFilter; // @synthesize countOfSmartFoldersWithQuickNotesFilter=_countOfSmartFoldersWithQuickNotesFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithFoldersFilter; // @synthesize countOfSmartFoldersWithFoldersFilter=_countOfSmartFoldersWithFoldersFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithAttachmentsFilter; // @synthesize countOfSmartFoldersWithAttachmentsFilter=_countOfSmartFoldersWithAttachmentsFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithChecklistsFilter; // @synthesize countOfSmartFoldersWithChecklistsFilter=_countOfSmartFoldersWithChecklistsFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithMentionsFilter; // @synthesize countOfSmartFoldersWithMentionsFilter=_countOfSmartFoldersWithMentionsFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithSharedFilter; // @synthesize countOfSmartFoldersWithSharedFilter=_countOfSmartFoldersWithSharedFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithDateModifiedFilter; // @synthesize countOfSmartFoldersWithDateModifiedFilter=_countOfSmartFoldersWithDateModifiedFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithDateCreatedFilter; // @synthesize countOfSmartFoldersWithDateCreatedFilter=_countOfSmartFoldersWithDateCreatedFilter;
@property(nonatomic) unsigned long long countOfSmartFoldersWithTagsFilter; // @synthesize countOfSmartFoldersWithTagsFilter=_countOfSmartFoldersWithTagsFilter;
@property(nonatomic) unsigned long long countOfCustomSmartFolders; // @synthesize countOfCustomSmartFolders=_countOfCustomSmartFolders;
@property(nonatomic) unsigned long long countOfFolders; // @synthesize countOfFolders=_countOfFolders;
- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)arg1 collaborationType:(long long)arg2;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)arg1 collaborationType:(id)arg2;
- (id)init;

@end

