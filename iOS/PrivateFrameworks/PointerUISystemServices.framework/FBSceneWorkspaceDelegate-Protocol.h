//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PointerUISystemServices/NSObject-Protocol.h>

@class FBScene, FBSceneClientHandshake, FBSceneWorkspace;

@protocol FBSceneWorkspaceDelegate <NSObject>

@optional
- (void)workspace:(FBSceneWorkspace *)arg1 willRemoveScene:(FBScene *)arg2;
- (void)workspace:(FBSceneWorkspace *)arg1 didAddScene:(FBScene *)arg2;
- (void)workspace:(FBSceneWorkspace *)arg1 clientDidConnectWithHandshake:(FBSceneClientHandshake *)arg2;
@end

