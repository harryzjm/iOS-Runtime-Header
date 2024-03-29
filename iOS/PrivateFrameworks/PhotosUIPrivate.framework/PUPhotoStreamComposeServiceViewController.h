//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoStreamComposeServiceViewController.h>

@class NSArray, NSObject, NSString;
@protocol PLAlbumContainer, PLAlbumProtocol;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController
{
    struct {
        unsigned int hasDidPost:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    NSObject<PLAlbumProtocol> *_selectedAlbum;
    NSArray *_actions;
    NSObject<PLAlbumContainer> *_albumList;
    _Bool _inCreateNewAlbum;
    NSArray *_recipients;
    _Bool _shouldShowPost;
    NSString *_itemCountString;
    NSString *_startingContentText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *startingContentText; // @synthesize startingContentText=_startingContentText;
- (_Bool)isContentValid;
- (void)_pushTitleController;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)userDidPost;
- (void)userDidCancel;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(_Bool)arg2;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (void)controller:(id)arg1 didSelectAlbum:(id)arg2;
- (id)albumListAction;
- (void)failWithError:(id)arg1;
- (void)send;
- (id)serviceIconImage;
- (id)title;
- (id)sheetActions;
- (void)setSourcesToShare:(id)arg1;
- (id)_imageFromStreamShareSource:(id)arg1;
- (void)setAssetsToShare:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStartingContentText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

