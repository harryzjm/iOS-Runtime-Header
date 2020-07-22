//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUPhotoPickerSelectionHandler-Protocol.h>
#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>
#import <PhotosUI/PUPhotoPickerTestSupportHandler-Protocol.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIMomentsGridViewController <PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUPhotoPickerTestSupportHandler>
{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    _Bool _didDisappear;
    id <PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    double _lastKnownWidth;
    struct UIEdgeInsets _lastKnownSafeAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets lastKnownSafeAreaInsets; // @synthesize lastKnownSafeAreaInsets=_lastKnownSafeAreaInsets;
@property(nonatomic) double lastKnownWidth; // @synthesize lastKnownWidth=_lastKnownWidth;
@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (void).cxx_destruct;
- (_Bool)canDragIn;
- (_Bool)canDragOut;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)performPhotoPickerSelection;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (_Bool)shouldShowMenu;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (_Bool)initiallyScrolledToBottom;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (id)newGridLayout;
@property(readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
- (void)_setTitle;
@property(readonly, nonatomic) _Bool referenceValuesDidChange;
- (void)_scrollToBottomIfNeeded;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)allowsPeeking;
- (id)initWithSpec:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
