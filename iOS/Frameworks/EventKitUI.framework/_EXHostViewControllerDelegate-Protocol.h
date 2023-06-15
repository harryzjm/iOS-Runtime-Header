//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class NSError, NSXPCConnection, _EXHostViewController, _EXHostViewControllerConfiguration;

@protocol _EXHostViewControllerDelegate <NSObject>

@optional
- (_Bool)shouldAcceptXPCConnection:(NSXPCConnection *)arg1;
- (void)hostViewController:(_EXHostViewController *)arg1 didEndHosting:(_EXHostViewControllerConfiguration *)arg2 error:(NSError *)arg3;
- (void)hostViewController:(_EXHostViewController *)arg1 didBeginHosting:(_EXHostViewControllerConfiguration *)arg2;
- (void)hostViewController:(_EXHostViewController *)arg1 didFailToHost:(_EXHostViewControllerConfiguration *)arg2 error:(NSError *)arg3;
- (void)hostViewController:(_EXHostViewController *)arg1 didPrepareToHost:(_EXHostViewControllerConfiguration *)arg2;
- (void)hostViewControllerWillDeactivate:(_EXHostViewController *)arg1 error:(NSError *)arg2;
- (void)hostViewControllerDidActivate:(_EXHostViewController *)arg1;
@end

