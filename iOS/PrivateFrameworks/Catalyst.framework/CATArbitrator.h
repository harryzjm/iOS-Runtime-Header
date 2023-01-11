//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CATArbitrator : NSObject
{
    NSMutableDictionary *mRegistrationByKey;
}

- (void).cxx_destruct;
- (unsigned long long)unregisterResourceForKey:(id)arg1;
- (void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned long long)arg3;
- (void)registerResource:(id)arg1 forKey:(id)arg2;
- (void)stopWaiting:(id)arg1;
- (id)waitForResourcesForKeys:(id)arg1 exclusive:(_Bool)arg2 delegateQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)resourcesForKeys:(id)arg1 exclusive:(_Bool)arg2;
- (id)resourceForKey:(id)arg1 exclusive:(_Bool)arg2;
- (id)debugDescription;
- (id)init;

@end
