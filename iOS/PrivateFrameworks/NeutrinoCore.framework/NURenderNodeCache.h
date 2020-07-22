//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)retrieveAndCacheNode:(id)arg1;
- (id)cachedNodeForNode:(id)arg1;
- (void)addNode:(id)arg1;
- (void)_addNode:(id)arg1;
- (id)init;

@end

