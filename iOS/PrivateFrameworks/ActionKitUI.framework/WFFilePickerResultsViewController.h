//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, WFRemoteFileListView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFFilePickerResultsViewController : UIViewController
{
    NSArray *_files;
    id <WFRemoteFileListViewDelegate> _delegate;
    WFRemoteFileListView *_fileListView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak WFRemoteFileListView *fileListView; // @synthesize fileListView=_fileListView;
@property(readonly, nonatomic) __weak id <WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateContentInset;
- (void)loadView;
- (void)dealloc;
- (id)initWithFileListDelegate:(id)arg1;

@end

