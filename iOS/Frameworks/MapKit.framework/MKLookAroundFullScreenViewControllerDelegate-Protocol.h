//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class MKLookAroundFullScreenViewController, UIView;
@protocol UIViewControllerTransitionCoordinator;

@protocol MKLookAroundFullScreenViewControllerDelegate <NSObject>
- (void)fullScreenViewController:(MKLookAroundFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize)arg2 coordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIView *)viewForFullScreenViewController:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerDidPresent:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillPresent:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerDidDismiss:(MKLookAroundFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillDismiss:(MKLookAroundFullScreenViewController *)arg1;
@end

