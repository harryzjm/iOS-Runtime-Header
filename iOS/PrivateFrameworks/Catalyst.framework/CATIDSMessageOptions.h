//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/NSCopying-Protocol.h>
#import <Catalyst/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CATIDSMessageOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fireAndForget;
    NSNumber *_deliveryTimeout;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *deliveryTimeout; // @synthesize deliveryTimeout=_deliveryTimeout;
@property(nonatomic, getter=shouldFireAndForget) _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
