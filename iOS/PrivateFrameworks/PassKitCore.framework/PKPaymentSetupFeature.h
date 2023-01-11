//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    long long _state;
    long long _supportedOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentSetupFeatureWithProtobuf:(id)arg1;
@property(nonatomic) long long supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end
