//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKGameCenterControllerDelegate-Protocol.h>

@class NSString;

@interface GKGameControllerSupport : NSObject <GKGameCenterControllerDelegate>
{
}

+ (id)shared;
- (void)gameCenterViewControllerDidFinish:(id)arg1;
- (void)showDashboard;
- (void)setupController:(id)arg1;
- (void)controllerDidConnect:(id)arg1;
- (_Bool)shouldRegisterGameControllers;
- (void)registerGameControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
