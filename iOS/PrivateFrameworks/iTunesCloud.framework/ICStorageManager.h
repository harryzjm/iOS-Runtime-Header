//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ICStorageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool cachingEnabled;
@property(readonly, nonatomic) unsigned long long storageSpaceAvailable;
- (id)init;

@end
