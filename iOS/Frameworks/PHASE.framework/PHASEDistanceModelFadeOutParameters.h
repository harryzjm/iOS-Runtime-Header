//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHASEDistanceModelFadeOutParameters : NSObject
{
    double _cullDistance;
}

+ (id)new;
@property(readonly, nonatomic) double cullDistance; // @synthesize cullDistance=_cullDistance;
- (id)initWithCullDistance:(double)arg1;
- (id)initWithMaximumDistance:(double)arg1 fadeOutLength:(double)arg2 curveType:(long long)arg3;
- (id)init;
- (void)setMaximumDistance:(double)arg1;
@property(readonly, nonatomic) double maximumDistance; // @dynamic maximumDistance;

@end
