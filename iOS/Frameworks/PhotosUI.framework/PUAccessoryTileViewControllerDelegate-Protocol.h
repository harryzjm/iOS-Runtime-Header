//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAccessoryTileViewController, UIView, UIViewController;
@protocol PUAccessoryContentViewController;

@protocol PUAccessoryTileViewControllerDelegate <NSObject>
- (UIViewController *)accessoryTileViewControllerHostViewController:(PUAccessoryTileViewController *)arg1;
- (UIViewController<PUAccessoryContentViewController> *)accessoryTileViewControllerAccessoryViewController:(PUAccessoryTileViewController *)arg1;

@optional
- (_Bool)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(PUAccessoryTileViewController *)arg1;
- (UIView *)accessoryTileViewControllerViewHostingGestureRecognizers:(PUAccessoryTileViewController *)arg1;
@end

