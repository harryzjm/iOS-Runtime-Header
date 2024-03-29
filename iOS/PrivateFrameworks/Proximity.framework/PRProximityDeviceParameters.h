//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PRProximityDeviceParameters : NSObject
{
    void *_filter;
    unsigned long long _samplesize;
    NSNumber *_rssiImmediate;
    NSNumber *_rssiNear;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *rssiNear; // @synthesize rssiNear=_rssiNear;
@property(readonly) NSNumber *rssiImmediate; // @synthesize rssiImmediate=_rssiImmediate;
@property(readonly) unsigned long long samplesize; // @synthesize samplesize=_samplesize;
@property(readonly) void *filter; // @synthesize filter=_filter;
- (id)initWithFilter:(void *)arg1 sampleSize:(unsigned long long)arg2 rssiImmediate:(id)arg3 rssiNear:(id)arg4;
- (id)init;

@end

