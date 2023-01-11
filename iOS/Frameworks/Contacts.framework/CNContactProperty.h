//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

+ (_Bool)supportsSecureCoding;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *key;
- (int)multiValueIdentifier;
@property(readonly, nonatomic) id value;
@property(readonly, copy, nonatomic) NSString *label;
- (id)labeledValue;
- (id)sourceContact;
@property(readonly, copy, nonatomic) CNContact *contact;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
