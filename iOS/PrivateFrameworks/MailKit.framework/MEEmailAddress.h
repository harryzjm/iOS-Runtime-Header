//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/ECEmailAddressConvertible-Protocol.h>
#import <MailKit/NSCopying-Protocol.h>
#import <MailKit/NSSecureCoding-Protocol.h>

@class ECEmailAddress, NSString;
@protocol ECEmailAddressConvertible;

@interface MEEmailAddress : NSObject <ECEmailAddressConvertible, NSSecureCoding, NSCopying>
{
    id <ECEmailAddressConvertible> _convertible;
}

+ (_Bool)supportsSecureCoding;
+ (id)emailAddressesForAddresses:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, copy, nonatomic) NSString *rawString;
- (id)initWithRawString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
