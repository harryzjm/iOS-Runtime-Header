//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUPhotoPickerSelectionHandler-Protocol.h>
#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIPhotosAlbumViewController <PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler>
{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    _Bool _didDisappear;
    int __albumFilter;
    id <PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    double _lastKnownWidth;
    struct UIEdgeInsets _lastKnownSafeAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets lastKnownSafeAreaInsets; // @synthesize lastKnownSafeAreaInsets=_lastKnownSafeAreaInsets;
@property(nonatomic) double lastKnownWidth; // @synthesize lastKnownWidth=_lastKnownWidth;
@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(nonatomic, setter=_setAlbumFilter:) int _albumFilter; // @synthesize _albumFilter=__albumFilter;
@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (void).cxx_destruct;
- (double)topMarginForPhotosGlobalFooterView:(id)arg1;
- (_Bool)canDragIn;
- (_Bool)canDragOut;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)performPhotoPickerSelection;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)wantsGlobalFooter;
@property(readonly, nonatomic) _Bool referenceValuesDidChange;
- (void)_scrollToBottomIfNeeded;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldShowSectionHeaders;
- (_Bool)shouldShowMenu;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)setAlbum:(id)arg1 existingFetchResult:(id)arg2;
@property(readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (_Bool)allowsPeeking;
- (id)init;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

