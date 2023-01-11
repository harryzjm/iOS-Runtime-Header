//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

@interface PSAppDataUsagePolicyCache : NSObject
{
    NSCache *_policyCache;
    struct __CTServerConnection *_ctServerConnection;
    NSObject<OS_dispatch_queue> *_policyPrefetchQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *policyPrefetchQueue; // @synthesize policyPrefetchQueue=_policyPrefetchQueue;
@property(retain, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
@property(retain, nonatomic) NSCache *policyCache; // @synthesize policyCache=_policyCache;
- (void).cxx_destruct;
- (_Bool)setUsagePoliciesForBundle:(id)arg1 cellular:(_Bool)arg2 wifi:(_Bool)arg3;
- (_Bool)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;
- (id)usagePolicyFor:(id)arg1;
- (void)flushPrefetchingQueue;
- (void)prefetchUsagePolicyFor:(id)arg1;
- (id)fetchUsagePolicyFor:(id)arg1;
- (id)init;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initPrivate;

@end

