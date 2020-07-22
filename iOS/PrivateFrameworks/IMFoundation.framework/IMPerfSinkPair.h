//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

@interface IMPerfSinkPair : NSObject
{
    id <IMPerfProfilerBehavior> _behavior;
    id <IMPerfProfilerSink> _sink;
}

@property(readonly, nonatomic) id <IMPerfProfilerSink> sink; // @synthesize sink=_sink;
@property(readonly, nonatomic) id <IMPerfProfilerBehavior> behavior; // @synthesize behavior=_behavior;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 sink:(id)arg2;

@end
