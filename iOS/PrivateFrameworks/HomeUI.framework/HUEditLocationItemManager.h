//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFHomeBuilder, HFItem, HFResidentDeviceItemProvider;

@interface HUEditLocationItemManager : HFItemManager
{
    HFItem *_nameItem;
    HFItem *_usersItem;
    HFItem *_inviteUsersItem;
    HFItem *_cameraItem;
    HFItem *_chooseWallpaperItem;
    HFItem *_wallpaperThumbnailItem;
    HFItem *_detailNotesItem;
    HFItem *_softwareUpdateItem;
    HFItem *_accessControlItem;
    HFItem *_removeItem;
    unsigned long long _context;
    HFResidentDeviceItemProvider *_residentDeviceItemProvider;
    HFHomeBuilder *_homeBuilder;
}

+ (_Bool)_isICloudEnabled;
+ (CDUnknownBlockType)residentDeviceItemComparator;
@property(retain, nonatomic) HFHomeBuilder *homeBuilder; // @synthesize homeBuilder=_homeBuilder;
@property(retain, nonatomic) HFResidentDeviceItemProvider *residentDeviceItemProvider; // @synthesize residentDeviceItemProvider=_residentDeviceItemProvider;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) HFItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HFItem *accessControlItem; // @synthesize accessControlItem=_accessControlItem;
@property(retain, nonatomic) HFItem *softwareUpdateItem; // @synthesize softwareUpdateItem=_softwareUpdateItem;
@property(retain, nonatomic) HFItem *detailNotesItem; // @synthesize detailNotesItem=_detailNotesItem;
@property(retain, nonatomic) HFItem *wallpaperThumbnailItem; // @synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem;
@property(retain, nonatomic) HFItem *chooseWallpaperItem; // @synthesize chooseWallpaperItem=_chooseWallpaperItem;
@property(retain, nonatomic) HFItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) HFItem *inviteUsersItem; // @synthesize inviteUsersItem=_inviteUsersItem;
@property(retain, nonatomic) HFItem *usersItem; // @synthesize usersItem=_usersItem;
@property(retain, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_homeFuture;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 context:(unsigned long long)arg3;

@end

