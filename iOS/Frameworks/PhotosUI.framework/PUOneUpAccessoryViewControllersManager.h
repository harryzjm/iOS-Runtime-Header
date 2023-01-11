//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXPhotosDetailsUIViewControllerDelegate-Protocol.h>

@class NSMapTable, NSString, PUBrowsingSession;
@protocol PUOneUpAccessoryViewControllersManagerDelegate;

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate>
{
    struct {
        _Bool preventRevealInMomentActionForAssetReference;
        _Bool requestDismissal;
    } _delegateRepondsTo;
    PUBrowsingSession *_browsingSession;
    id <PUOneUpAccessoryViewControllersManagerDelegate> _delegate;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    NSMapTable *__accessoryViewControllers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *_accessoryViewControllers; // @synthesize _accessoryViewControllers=__accessoryViewControllers;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceHandler; // @synthesize unlockDeviceHandler=_unlockDeviceHandler;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;
@property(nonatomic) __weak id <PUOneUpAccessoryViewControllersManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (_Bool)photosDetailsUIViewControllerRequestDismissal:(id)arg1;
- (id)_createAccessoryViewControllerForAssetReference:(id)arg1;
- (long long)_accessoryViewTypeForAsset:(id)arg1;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1;
- (id)assetReferenceForAccessoryViewController:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)accessoryViewControllerForAssetReference:(id)arg1;
- (_Bool)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1;
- (long long)accessoryViewTypeForAsset:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
