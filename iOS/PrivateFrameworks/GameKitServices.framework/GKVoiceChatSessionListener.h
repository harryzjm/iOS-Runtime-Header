//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKRWLock, GKSessionInternal, NSMutableArray;

@interface GKVoiceChatSessionListener : NSObject
{
    NSMutableArray *_conferenceList;
    GKSessionInternal *_gkSession;
    GKRWLock *_rwlock;
}

- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;
- (void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2;
- (id)currentSessions;
- (void)removeSession:(id)arg1;
- (void)registerNewGKVoiceChatSession:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end
