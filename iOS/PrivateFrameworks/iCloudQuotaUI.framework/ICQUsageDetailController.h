//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSEditableListController.h>

@class ICQUsageStorageController, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface ICQUsageDetailController : PSEditableListController
{
    NSMutableDictionary *_media;
    _Bool _showingAll;
    NSMutableArray *_documentsGroup;
    ICQUsageStorageController *_storageController;
}

+ (void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2;
+ (_Bool)hasMediaForGroups:(id)arg1;
+ (float)totalSizeForGroups:(id)arg1;
+ (id)mpKeyTranslations;
+ (id)mediaGroups;
- (void).cxx_destruct;
@property(nonatomic) __weak ICQUsageStorageController *storageController; // @synthesize storageController=_storageController;
@property(readonly, nonatomic) NSDictionary *mediaCache; // @synthesize mediaCache=_media;
- (id)specifiers;
- (id)copyMediaSpecifiers;
- (id)documentsAndDataSpecifiers;
- (void)deleteApp;
- (void)confirmAppDeletion;
- (id)dynamicSize:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)size:(id)arg1;
- (_Bool)updateSizesAfterDeletingMediaKind:(id)arg1 deletedSection:(_Bool)arg2 shouldPop:(_Bool)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)removeMediaEntry:(id)arg1 inSection:(long long)arg2;
- (void)showMore:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)needsToShowToolbarInPrefsAppRoot;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (_Bool)isAppController;
- (_Bool)hasMedia;

@end
