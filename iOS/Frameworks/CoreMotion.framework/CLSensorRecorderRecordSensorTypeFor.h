//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding>
{
    int _dataType;
    double _duration;
}

+ (_Bool)supportsSecureCoding;
@property int dataType; // @synthesize dataType=_dataType;
@property double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

