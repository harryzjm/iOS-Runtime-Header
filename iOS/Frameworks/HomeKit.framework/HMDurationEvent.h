//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMDurationEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    double _duration;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)setOffset:(double)arg1;
- (id)initWithDict:(id)arg1 duration:(double)arg2;
- (id)initWithDuration:(double)arg1;

@end
