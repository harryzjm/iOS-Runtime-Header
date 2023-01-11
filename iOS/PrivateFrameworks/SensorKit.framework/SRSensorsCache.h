//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SensorKit/NSCacheDelegate-Protocol.h>

@class NSArray, NSCache, NSString;

__attribute__((visibility("hidden")))
@interface SRSensorsCache : NSObject <NSCacheDelegate>
{
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
    _Bool _shouldReloadAllSensors;
}

+ (void)initialize;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)initWithDirectories:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
