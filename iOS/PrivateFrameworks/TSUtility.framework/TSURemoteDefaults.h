//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSURemoteDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (double)timeIntervalUntilNextUpdate;
- (void)checkForUpdate;
- (void)registerDefaults;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initInternal;

@end

