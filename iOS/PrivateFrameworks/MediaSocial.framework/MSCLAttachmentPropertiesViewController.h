//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/MSCLAttachmentPropertiesTableViewSectionDelegate-Protocol.h>
#import <MediaSocial/UIImagePickerControllerDelegate-Protocol.h>
#import <MediaSocial/UINavigationControllerDelegate-Protocol.h>
#import <MediaSocial/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>

@class MSCLAlbumSelectionViewController, MSCLAttachment, MSCLConfiguration, MSCLLoadAuthorAlbumsOperation, MSCLTokenTextViewTableAssistant, NSArray, NSMutableArray, NSString, SKUIMediaSocialAuthor, UIBarButtonItem, UIImagePickerController, UIPopoverPresentationController, UITableView;
@protocol MSCLAttachmentPropertiesDelegate;

@interface MSCLAttachmentPropertiesViewController : SKUIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, MSCLAttachmentPropertiesTableViewSectionDelegate>
{
    MSCLAlbumSelectionViewController *_albumSelectionViewController;
    MSCLAttachment *_attachment;
    long long _artistNameLength;
    SKUIMediaSocialAuthor *_author;
    NSArray *_authorAlbumItems;
    MSCLLoadAuthorAlbumsOperation *_authorAlbumsOperation;
    MSCLConfiguration *_configuration;
    id <MSCLAttachmentPropertiesDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UIImagePickerController *_imagePickerController;
    struct CGRect _keyboardFrame;
    UIPopoverPresentationController *_popoverPresentationController;
    NSMutableArray *_sections;
    UITableView *_tableView;
    long long _titleLength;
    MSCLTokenTextViewTableAssistant *_tokenTextViewAssistant;
}

@property(nonatomic) __weak id <MSCLAttachmentPropertiesDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) MSCLAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)_updateDoneButton;
- (void)_setCoverImage:(id)arg1;
- (void)_setAuthorAlbumItems:(id)arg1;
- (void)_reloadSectionWithType:(long long)arg1;
- (void)_pushCategorySelectionViewController;
- (void)_pushAlbumSelectionViewController;
- (void)_presentCoverImagePickerControllerForIndexPath:(id)arg1;
- (void)_presentCoverImageEditingOptionsForIndexPath:(id)arg1;
- (void)_layoutTableView;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)tableViewSection:(id)arg1 artistLengthChanged:(long long)arg2;
- (void)tableViewSection:(id)arg1 titleLengthChanged:(long long)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_doneButtonAction:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

