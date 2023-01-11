//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFBufferedQueue : NSObject
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumLatency; // @synthesize maximumLatency=_maximumLatency;
@property(nonatomic) unsigned int maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_currentSize;
- (_Bool)handleItems:(id)arg1;
- (unsigned long long)sizeForItem:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)flushIfNecessary;
- (_Bool)flush;
- (_Bool)_flush;
- (void)removeAllObjects;
- (_Bool)addItem:(id)arg1;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end
