//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUAlbumListSettings : PXSettings
{
    _Bool _shouldUseEditorialLayout;
    _Bool _allowNavigationTitleEditing;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool allowNavigationTitleEditing; // @synthesize allowNavigationTitleEditing=_allowNavigationTitleEditing;
@property(nonatomic) _Bool shouldUseEditorialLayout; // @synthesize shouldUseEditorialLayout=_shouldUseEditorialLayout;
- (void)setDefaultValues;
- (id)parentSettings;

@end

