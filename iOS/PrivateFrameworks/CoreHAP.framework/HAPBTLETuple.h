//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HAPBTLETuple : NSObject
{
    int _maxHAPConnections;
    float _minBandwidth;
    float _maxBandwidth;
    unsigned long long _atvState;
    struct BTStatus _state;
}

+ (id)state2String:(struct BTStatus *)arg1;
+ (id)makeTupleWithState:(struct BTStatus *)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)atvState2String:(unsigned long long)arg1;
+ (void)bandwidthFromATVState:(unsigned long long)arg1 MinBandwidth:(float *)arg2 MaxBandwidth:(float *)arg3;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
@property(nonatomic) float maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) float minBandwidth; // @synthesize minBandwidth=_minBandwidth;
@property(nonatomic) int maxHAPConnections; // @synthesize maxHAPConnections=_maxHAPConnections;
@property(nonatomic) struct BTStatus state; // @synthesize state=_state;
@property(nonatomic) unsigned long long atvState; // @synthesize atvState=_atvState;
- (id)description;

@end

