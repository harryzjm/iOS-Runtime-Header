//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, VUILibraryListItemView;
@protocol VUILibraryDownloadPopoverViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadPopoverViewController : UIViewController
{
    id <VUILibraryDownloadPopoverViewControllerDelegate> _delegate;
    VUILibraryListItemView *_listView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUILibraryListItemView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak id <VUILibraryDownloadPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popoverPressed:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

