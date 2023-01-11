//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBMutableWorkspaceConnectionsState, FBWorkspaceConnectionsStateStore, NSMutableDictionary;
@protocol FBWorkspaceEventDispatcherTarget;

@interface FBWorkspaceEventDispatcher : NSObject
{
    FBWorkspaceConnectionsStateStore *_store;
    id <FBWorkspaceEventDispatcherTarget> _target;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_workspaces;
    NSMutableDictionary *_lock_restartAssertions;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)noteHandshakeForWorkspaceRegistration:(id)arg1 withRemnants:(id)arg2;
- (id)registerWorkspaceWithProcessHandle:(id)arg1;
- (void)registerTarget:(id)arg1;
- (void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg1 toTarget:(id)arg2;
- (id)init;
- (id)_initWithConnectionStore:(id)arg1;

@end
