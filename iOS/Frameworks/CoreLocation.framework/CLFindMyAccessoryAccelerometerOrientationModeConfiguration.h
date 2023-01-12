//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject <NSSecureCoding>
{
    unsigned short _sleepDuration_ms;
    unsigned int _threshold;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned short sleepDuration_ms; // @synthesize sleepDuration_ms=_sleepDuration_ms;
@property(nonatomic) unsigned int threshold; // @synthesize threshold=_threshold;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(unsigned int)arg1 sleepDuration:(unsigned short)arg2;

@end
