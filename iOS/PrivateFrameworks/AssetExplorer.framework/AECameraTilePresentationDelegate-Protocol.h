//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class AECameraTilePresentationNavigationController;

@protocol AECameraTilePresentationDelegate <NSObject>

@optional
- (void)presentationNavigationControllerWillBeDismissed:(AECameraTilePresentationNavigationController *)arg1;
- (void)presentationNavigationControllerPrepareForDismissal:(AECameraTilePresentationNavigationController *)arg1;
- (void)presentationNavigationControllerWillBePresented:(AECameraTilePresentationNavigationController *)arg1;
@end
