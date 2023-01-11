//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController
{
    HUAccessorySceneListContentViewController *_existingSceneListContentViewController;
    HUAccessorySceneListContentViewController *_suggestedSceneListContentViewController;
}

@property(retain, nonatomic) HUAccessorySceneListContentViewController *suggestedSceneListContentViewController; // @synthesize suggestedSceneListContentViewController=_suggestedSceneListContentViewController;
@property(retain, nonatomic) HUAccessorySceneListContentViewController *existingSceneListContentViewController; // @synthesize existingSceneListContentViewController=_existingSceneListContentViewController;
- (void).cxx_destruct;
- (id)childViewControllersToPreload;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithServiceLikeItem:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) HUAccessorySceneListItemManager *itemManager; // @dynamic itemManager;

@end
