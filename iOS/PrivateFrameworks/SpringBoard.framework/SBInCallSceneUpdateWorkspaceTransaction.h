//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction
{
    SBApplicationSceneEntity *_applicationSceneEntity;
    CDUnknownBlockType _postSceneUpdateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType postSceneUpdateHandler; // @synthesize postSceneUpdateHandler=_postSceneUpdateHandler;
- (void)_begin;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;

@end
