//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding>
{
    double _timeInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;

@end
