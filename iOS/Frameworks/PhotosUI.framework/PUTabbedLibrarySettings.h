//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@interface PUTabbedLibrarySettings : PXSettings
{
    _Bool _enablePhotosTab;
    _Bool _enableMemoriesTab;
    _Bool _enableSharedTab;
    _Bool _enableAlbumsTab;
    _Bool _enableCuratedLibraryTab;
    _Bool _enableForYouTab;
    _Bool _enableSearchTab;
    _Bool _enableConsolidatedAlbumsTab;
    _Bool _enableBlankTab;
    _Bool _sidebarAnimateSelectionUpdates;
    _Bool _sidebarAllPhotosSuspendsNavigationHighlights;
    _Bool _sidebarScrollSelectedItemToCenter;
    _Bool _sidebarOnlyScrollOffscreenItemOnScreen;
    _Bool _sidebarExpandSelectedItems;
    _Bool _sidebarAnimateExpandSelectedItems;
    _Bool _sidebarAnimateDataSourceUpdates;
    _Bool _sidebarUseMacStructure;
    _Bool _sidebarEditAutoExpandToEditableItem;
    _Bool _sidebarHideNavBackButtonForSelectedItem;
    _Bool _sidebarLaunchAnimateLoad;
    _Bool _sidebarSymbolImagesOnly;
    long long _sidebarLaunchLoadMode;
    long long _sidebarEnabledMode;
}

+ (id)keyPathsForValuesAffectingSidebarEnabled;
+ (id)transientProperties;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long sidebarEnabledMode; // @synthesize sidebarEnabledMode=_sidebarEnabledMode;
@property(nonatomic) _Bool sidebarSymbolImagesOnly; // @synthesize sidebarSymbolImagesOnly=_sidebarSymbolImagesOnly;
@property(nonatomic) _Bool sidebarLaunchAnimateLoad; // @synthesize sidebarLaunchAnimateLoad=_sidebarLaunchAnimateLoad;
@property(nonatomic) long long sidebarLaunchLoadMode; // @synthesize sidebarLaunchLoadMode=_sidebarLaunchLoadMode;
@property(nonatomic) _Bool sidebarHideNavBackButtonForSelectedItem; // @synthesize sidebarHideNavBackButtonForSelectedItem=_sidebarHideNavBackButtonForSelectedItem;
@property(nonatomic) _Bool sidebarEditAutoExpandToEditableItem; // @synthesize sidebarEditAutoExpandToEditableItem=_sidebarEditAutoExpandToEditableItem;
@property(nonatomic) _Bool sidebarUseMacStructure; // @synthesize sidebarUseMacStructure=_sidebarUseMacStructure;
@property(nonatomic) _Bool sidebarAnimateDataSourceUpdates; // @synthesize sidebarAnimateDataSourceUpdates=_sidebarAnimateDataSourceUpdates;
@property(nonatomic) _Bool sidebarAnimateExpandSelectedItems; // @synthesize sidebarAnimateExpandSelectedItems=_sidebarAnimateExpandSelectedItems;
@property(nonatomic) _Bool sidebarExpandSelectedItems; // @synthesize sidebarExpandSelectedItems=_sidebarExpandSelectedItems;
@property(nonatomic) _Bool sidebarOnlyScrollOffscreenItemOnScreen; // @synthesize sidebarOnlyScrollOffscreenItemOnScreen=_sidebarOnlyScrollOffscreenItemOnScreen;
@property(nonatomic) _Bool sidebarScrollSelectedItemToCenter; // @synthesize sidebarScrollSelectedItemToCenter=_sidebarScrollSelectedItemToCenter;
@property(nonatomic) _Bool sidebarAllPhotosSuspendsNavigationHighlights; // @synthesize sidebarAllPhotosSuspendsNavigationHighlights=_sidebarAllPhotosSuspendsNavigationHighlights;
@property(nonatomic) _Bool sidebarAnimateSelectionUpdates; // @synthesize sidebarAnimateSelectionUpdates=_sidebarAnimateSelectionUpdates;
@property(nonatomic) _Bool enableBlankTab; // @synthesize enableBlankTab=_enableBlankTab;
@property(nonatomic) _Bool enableConsolidatedAlbumsTab; // @synthesize enableConsolidatedAlbumsTab=_enableConsolidatedAlbumsTab;
@property(nonatomic) _Bool enableSearchTab; // @synthesize enableSearchTab=_enableSearchTab;
@property(nonatomic) _Bool enableForYouTab; // @synthesize enableForYouTab=_enableForYouTab;
@property(nonatomic) _Bool enableCuratedLibraryTab; // @synthesize enableCuratedLibraryTab=_enableCuratedLibraryTab;
@property(nonatomic) _Bool enableAlbumsTab; // @synthesize enableAlbumsTab=_enableAlbumsTab;
@property(nonatomic) _Bool enableSharedTab; // @synthesize enableSharedTab=_enableSharedTab;
@property(nonatomic) _Bool enableMemoriesTab; // @synthesize enableMemoriesTab=_enableMemoriesTab;
@property(nonatomic) _Bool enablePhotosTab; // @synthesize enablePhotosTab=_enablePhotosTab;
@property(readonly, nonatomic, getter=isSidebarEnabled) _Bool sidebarEnabled;
- (long long)countOfEnabledTabs;
- (id)allTabs;
- (void)setDefaultValues;
- (id)parentSettings;

@end
