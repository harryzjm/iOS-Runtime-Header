//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBUIProcessManager-Protocol.h>

@class FBUISceneClientIdentity;
@protocol FBUISceneClientWorkspace;

@protocol FBUIProcessManagerInternal <FBUIProcessManager>
- (void)invalidateClientWorkspace:(id <FBUISceneClientWorkspace>)arg1;
- (id <FBUISceneClientWorkspace>)workspaceForSceneClientWithIdentity:(FBUISceneClientIdentity *)arg1;
@end

