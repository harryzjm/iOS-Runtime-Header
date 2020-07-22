//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICURLSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

+ (id)sharedSessionManager;
- (void).cxx_destruct;
- (void)removeSessionWithIdentifier:(id)arg1;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (id)sessionWithIdentifier:(id)arg1;
- (id)sessionWithConfiguration:(id)arg1;
- (id)init;

@end

