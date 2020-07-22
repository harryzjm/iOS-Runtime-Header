//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GEOPhoneNumberResolving, OS_dispatch_queue;

@interface GEOPhoneNumberResolver : NSObject
{
    id <GEOPhoneNumberResolving> _resolver;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)useRemoteResolver;
+ (void)useLocalResolver;
+ (void)useProxy:(Class)arg1;
+ (id)sharedResolver;
- (void).cxx_destruct;
- (void)_alePackResolution:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)init;

@end
