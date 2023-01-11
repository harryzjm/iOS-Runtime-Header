//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>
#import <StoreKitUI/UISearchControllerDelegate-Protocol.h>

@class SKUIClientContext, SKUISearchController;
@protocol UIViewControllerTransitionCoordinator;

@protocol SKUISearchControllerDelegate <NSObject, UISearchControllerDelegate>
- (SKUIClientContext *)searchControllerClientContext:(SKUISearchController *)arg1;
- (void)searchControllerWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end
