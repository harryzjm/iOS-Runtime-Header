//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BSAction.h"

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) FBSSceneSnapshotContext *context;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
