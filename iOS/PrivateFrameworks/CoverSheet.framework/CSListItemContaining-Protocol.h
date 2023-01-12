//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSListItem, CSListItemManager, CSListItemSection, UIViewController;

@protocol CSListItemContaining <NSObject>
- (void)itemManagerDidAddNewSceneHostEnvironment;
- (void)itemManager:(CSListItemManager *)arg1 significantUserInteractionEndedWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 significantUserInteractionBeganWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 cancelTouchesForInteractionWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 requestsAuthenticationAndPerformBlock:(void (^)(_Bool))arg2;
- (void)itemManager:(CSListItemManager *)arg1 setNowPlayingItem:(CSListItem *)arg2;
- (struct CGSize)sizeToMimicForItemContentHost;
- (void)itemManager:(CSListItemManager *)arg1 requestsModalPresentationOfViewController:(UIViewController *)arg2 forItem:(CSListItem *)arg3 animated:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)itemManager:(CSListItemManager *)arg1 removeItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 updateItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 insertItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 insertSection:(CSListItemSection *)arg2;
@end

