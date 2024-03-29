//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MusicKit_PlayerPathSessionManager : NSObject
{
    NSMutableDictionary *_sessionIDsByPlayerPath;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedSessionManager;
- (void).cxx_destruct;
- (id)sessionIDForPlayerPath:(id)arg1;
- (id)init;

@end

