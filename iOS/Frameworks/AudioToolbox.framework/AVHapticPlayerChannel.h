//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class HapticClient;

@interface AVHapticPlayerChannel : NSObject
{
    unsigned long long _chanID;
    unsigned long long _behavior;
    HapticClient *_client;
}

@property __weak HapticClient *client; // @synthesize client=_client;
@property unsigned long long chanID; // @synthesize chanID=_chanID;
- (void).cxx_destruct;
- (_Bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id *)arg4;
- (_Bool)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id *)arg4;
- (_Bool)clearEvents:(double)arg1 error:(id *)arg2;
- (_Bool)stopEvent:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)sendEvents:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)startEvent:(unsigned long long)arg1 atTime:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4 token:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)startEvent:(unsigned long long)arg1 atTime:(double)arg2 token:(unsigned long long *)arg3 error:(id *)arg4;
@property unsigned long long eventBehavior;
- (void)invalidate;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;

@end

