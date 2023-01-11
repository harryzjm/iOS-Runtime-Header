//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNPhoneNumber, CNPostalAddress, NSPersonNameComponents, NSString;

@interface PKContact : NSObject <NSSecureCoding>
{
    NSPersonNameComponents *_name;
    CNPostalAddress *_postalAddress;
    CNPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
    NSString *_supplementarySubLocality;
}

+ (_Bool)supportsSecureCoding;
+ (long long)version;
@property(retain, nonatomic) NSString *supplementarySubLocality; // @synthesize supplementarySubLocality=_supplementarySubLocality;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(retain, nonatomic) NSPersonNameComponents *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)cnMutableContact;
- (unsigned long long)hash;
- (_Bool)isEqualToContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCNContact:(id)arg1;

@end

