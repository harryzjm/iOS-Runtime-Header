//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUGridActionSetListViewController, NAFuture, NSDictionary, NSSet;

@protocol HUGridActionSetListViewControllerDelegate <NSObject>
- (void)addSceneTileAction:(id)arg1;

@optional
- (NAFuture *)actionSetListViewController:(HUGridActionSetListViewController *)arg1 futureToUpdateItems:(NSSet *)arg2 itemUpdateOptions:(NSDictionary *)arg3;
@end

