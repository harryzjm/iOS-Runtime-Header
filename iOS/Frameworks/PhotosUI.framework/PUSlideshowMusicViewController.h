//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/MPMediaPickerControllerDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PUSlideshowMediaItem, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowMusicDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate>
{
    NSArray *_mediaItems;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    _Bool _shouldHideTableViewWhenViewWillDisappear;
    _Bool __needsUpdateSpec;
    _Bool __needsUpdateBackgroundView;
    _Bool __needsUpdateTableView;
    PUSlideshowMediaItem *_currentMediaItem;
    id <PUSlideshowMusicDelegate> _delegate;
}

@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateBackgroundView:) _Bool _needsUpdateBackgroundView; // @synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUSlideshowMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (void).cxx_destruct;
- (_Bool)pu_wantsNavigationBarVisible;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_didPickMediaItem:(id)arg1;
- (void)_didFinish;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateTableViewIfNeeded;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateTableView;
- (void)_invalidateBackgroundView;
- (void)_invalidateSpec;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

