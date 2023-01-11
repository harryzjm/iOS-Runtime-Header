//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSXPCConnection, PGPictureInPictureApplication, PGPictureInPictureController, PGPictureInPictureViewController;

@protocol PGPictureInPictureControllerDelegate <NSObject>

@optional
- (_Bool)pictureInPictureController:(PGPictureInPictureController *)arg1 shouldDenyNewConnection:(NSXPCConnection *)arg2;
- (_Bool)pictureInPictureController:(PGPictureInPictureController *)arg1 shouldCancelPictureInPictureForApplication:(PGPictureInPictureApplication *)arg2 whenStartingPictureInPictureForApplication:(PGPictureInPictureApplication *)arg3;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
@end
