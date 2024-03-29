//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSError, NSMutableOrderedSet, NSString, UISearchController, WFRemoteFileListView, WFRemoteFileStatusView;
@protocol WFFileStorageService;

__attribute__((visibility("hidden")))
@interface WFFilePickerViewController : UIViewController
{
    _Bool _hideSearchBar;
    _Bool _allowsMultipleSelection;
    _Bool _loading;
    id <WFFileStorageService> _service;
    NSString *_path;
    long long _mode;
    CDUnknownBlockType _pickCompletionHandler;
    CDUnknownBlockType _saveCompletionHandler;
    NSArray *_files;
    NSError *_error;
    NSMutableOrderedSet *_selectedFiles;
    UISearchController *_searchController;
    WFRemoteFileListView *_fileListView;
    WFRemoteFileStatusView *_statusView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak WFRemoteFileStatusView *statusView; // @synthesize statusView=_statusView;
@property(readonly, nonatomic) __weak WFRemoteFileListView *fileListView; // @synthesize fileListView=_fileListView;
@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(copy, nonatomic) NSMutableOrderedSet *selectedFiles; // @synthesize selectedFiles=_selectedFiles;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(readonly, nonatomic) CDUnknownBlockType saveCompletionHandler; // @synthesize saveCompletionHandler=_saveCompletionHandler;
@property(readonly, nonatomic) CDUnknownBlockType pickCompletionHandler; // @synthesize pickCompletionHandler=_pickCompletionHandler;
@property(readonly, nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool hideSearchBar; // @synthesize hideSearchBar=_hideSearchBar;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) id <WFFileStorageService> service; // @synthesize service=_service;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (_Bool)fileListView:(id)arg1 shouldSelectFile:(id)arg2;
- (_Bool)fileListView:(id)arg1 shouldDisplayCheckmarkForFile:(id)arg2;
- (void)fileListView:(id)arg1 didSelectFile:(id)arg2;
- (void)statusViewDidPressRecoveryButton:(id)arg1;
- (void)navigateToSubdirectoryAtPath:(id)arg1;
- (_Bool)caseInsensitiveArray:(id)arg1 isEqualToArray:(id)arg2;
- (void)updateToolbar;
- (void)setStatusViewToEmpty;
- (void)updateStatusViewAnimated:(_Bool)arg1;
- (void)loadFiles;
- (void)finish;
- (void)cancel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPath:(id)arg1 selectedFiles:(id)arg2 service:(id)arg3 mode:(long long)arg4 allowsMultipleSelection:(_Bool)arg5 pickCompletionHandler:(CDUnknownBlockType)arg6 saveCompletionHandler:(CDUnknownBlockType)arg7;
- (id)initForSavingFilesAtPath:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initForPickingFilesAtPath:(id)arg1 service:(id)arg2 allowsMultipleSelection:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

