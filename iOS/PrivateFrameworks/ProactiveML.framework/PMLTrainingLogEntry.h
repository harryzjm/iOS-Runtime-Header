//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PMLTrainingLogEntry : NSObject
{
    double _timestamp;
    unsigned long long _serverIteration;
}

@property(readonly) unsigned long long serverIteration; // @synthesize serverIteration=_serverIteration;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;

@end

