//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXGridPresentation-Protocol.h>

@class NSString, PUSessionInfo;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject <PXGridPresentation>
{
    PUSessionInfo *_sessionInfo;
    long long _userInterfaceIdiom;
}

@property long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void).cxx_destruct;
- (id)_assetCollectionToAssetsMapForAssets:(id)arg1;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=_isRunningInPhotoPicker) _Bool _isRunningInPhotoPicker;
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
- (id)createPanoramaViewController;
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;
- (_Bool)_isEmpty:(id)arg1;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(_Bool)arg3 containerViewController:(id)arg4 navigationItemDelegate:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

