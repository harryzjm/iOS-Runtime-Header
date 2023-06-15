//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/NSObject-Protocol.h>

@class NSError, SBSBackgroundActivityCoordinator;
@protocol SBSStatusBarBackgroundActivityTapContext;

@protocol SBSBackgroundActivityCoordinatorDelegate <NSObject>
- (void)statusBarCoordinator:(SBSBackgroundActivityCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional
- (_Bool)statusBarCoordinator:(SBSBackgroundActivityCoordinator *)arg1 receivedTapWithContext:(id <SBSStatusBarBackgroundActivityTapContext>)arg2 completionBlock:(void (^)(void))arg3;
@end

