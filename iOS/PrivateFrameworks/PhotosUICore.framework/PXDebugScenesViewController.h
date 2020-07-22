//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface PXDebugScenesViewController : UITableViewController
{
    NSArray *_sceneCollectionItems;
}

@property(retain, nonatomic) NSArray *sceneCollectionItems; // @synthesize sceneCollectionItems=_sceneCollectionItems;
- (void).cxx_destruct;
- (void)_fetchScenes;
- (id)_assetsWithSceneIdentifier:(id)arg1;
- (id)_fetchAssetsWithSceneIdentifier:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
