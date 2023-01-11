//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSPersistentContainer, PDSCDCacheContainer;

__attribute__((visibility("hidden")))
@interface PDSCDCacheReferenceProxy : NSProxy
{
    PDSCDCacheContainer *_cacheContainer;
    NSPersistentContainer *_persistentContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) PDSCDCacheContainer *cacheContainer; // @synthesize cacheContainer=_cacheContainer;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithCacheContainer:(id)arg1 persistentContainer:(id)arg2;

@end
