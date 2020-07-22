//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/NSSecureCoding-Protocol.h>

@interface PGPlaybackProgress : NSObject <NSSecureCoding>
{
    double _anchorProgress;
    double _anchorTimestamp;
    double _rate;
}

+ (_Bool)supportsSecureCoding;
+ (id)playbackProgressWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;
+ (double)currentTimestamp;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (double)progressForTimestamp:(double)arg1;
@property(readonly, nonatomic) double currentProgress;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double anchorTimestamp;
@property(readonly, nonatomic) double anchorProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;

@end
