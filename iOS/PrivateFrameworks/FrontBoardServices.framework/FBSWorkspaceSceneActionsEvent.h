//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface FBSWorkspaceSceneActionsEvent
{
    NSSet *_actions;
}

@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end

