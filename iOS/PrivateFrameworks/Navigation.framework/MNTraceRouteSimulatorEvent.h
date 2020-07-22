//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface MNTraceRouteSimulatorEvent : NSObject
{
    double _timestamp;
    GEOLocation *_location;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLocation:(id)arg1;

@end
