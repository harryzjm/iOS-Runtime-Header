//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class RCPEventStream;

@interface RCPTraceLayer : CALayer
{
    RCPEventStream *_eventStream;
    unsigned long long _time;
    long long _interfaceOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) RCPEventStream *eventStream; // @synthesize eventStream=_eventStream;
- (void)drawInContext:(struct CGContext *)arg1;

@end
