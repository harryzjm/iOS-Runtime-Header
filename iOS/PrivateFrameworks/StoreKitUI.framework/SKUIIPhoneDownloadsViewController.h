//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, UITableView, _UIContentUnavailableView;
@protocol SKUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneDownloadsViewController : UIViewController
{
    UITableView *_tableView;
    _UIContentUnavailableView *_noContentView;
    id <SKUIDownloadsChildViewControllerDelegate> _delegate;
    NSArray *_downloads;
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(nonatomic) __weak id <SKUIDownloadsChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reload;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)reloadDownloadsAtIndexes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

