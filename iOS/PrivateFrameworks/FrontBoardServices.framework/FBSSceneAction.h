//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction
{
    FBSScene *_scene;
    FBSSerialQueue *_callOutQueue;
}

@property(retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

