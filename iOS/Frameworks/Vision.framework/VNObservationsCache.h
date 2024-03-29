//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNObservationsCache : NSObject
{
    struct os_unfair_lock_s _observationsCacheLock;
    NSMapTable *_observationsCache;
}

- (void).cxx_destruct;
- (id)observationsAcceptedByRequest:(id)arg1 testedKeyHandler:(CDUnknownBlockType)arg2;
- (void)setObservations:(id)arg1 forKey:(id)arg2;
- (id)observationsForKey:(id)arg1;
- (id)init;

@end

