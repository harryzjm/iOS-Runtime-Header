//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOThrottler : NSObject
{
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
    double _timeWindow;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)remainingEntries;
- (_Bool)addRequestTimestamp;
- (id)initWithRequestCount:(unsigned long long)arg1 interval:(double)arg2;
- (id)initForKey:(struct GEOThrottleKey)arg1;

@end

