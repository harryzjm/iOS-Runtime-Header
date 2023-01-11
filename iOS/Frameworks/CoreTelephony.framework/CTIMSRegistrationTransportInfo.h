//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isRegistered;
    int _contextType;
    int _transportType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int contextType; // @synthesize contextType=_contextType;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

