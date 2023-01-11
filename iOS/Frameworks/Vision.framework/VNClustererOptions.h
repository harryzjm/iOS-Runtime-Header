//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface VNClustererOptions : NSObject
{
    float _threshold;
    float _torsoThreshold;
    NSString *_type;
    NSString *_cachePath;
    NSData *_state;
}

@property(nonatomic) float torsoThreshold; // @synthesize torsoThreshold=_torsoThreshold;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSData *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)init;

@end

