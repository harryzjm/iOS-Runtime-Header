//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAProcessDevicePair, NSArray;

@interface CAActiveDeviceStreamsForProcess : NSObject
{
    CAProcessDevicePair *_pair;
    NSArray *_activeStreams;
}

- (void).cxx_destruct;
@property(readonly) NSArray *activeStreams; // @synthesize activeStreams=_activeStreams;
@property(readonly) CAProcessDevicePair *pair; // @synthesize pair=_pair;
- (id)initWithProcessDevicePair:(id)arg1 andActiveStreamArray:(id)arg2;

@end
