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
    _Bool _enableForYouTab;
    _Bool _enableSearchTab;
    _Bool _enableConsolidatedAlbumsTab;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool enableConsolidatedAlbumsTab; // @synthesize enableConsolidatedAlbumsTab=_enableConsolidatedAlbumsTab;
@property(nonatomic) _Bool enableSearchTab; // @synthesize enableSearchTab=_enableSearchTab;
@property(nonatomic) _Bool enableForYouTab; // @synthesize enableForYouTab=_enableForYouTab;
@property(nonatomic) _Bool enableAlbumsTab; // @synthesize enableAlbumsTab=_enableAlbumsTab;
@property(nonatomic) _Bool enableSharedTab; // @synthesize enableSharedTab=_enableSharedTab;
@property(nonatomic) _Bool enableMemoriesTab; // @synthesize enableMemoriesTab=_enableMemoriesTab;
@property(nonatomic) _Bool enablePhotosTab; // @synthesize enablePhotosTab=_enablePhotosTab;
- (long long)countOfEnabledTabs;
- (id)allTabs;
- (void)setDefaultValues;
- (id)parentSettings;

@end

