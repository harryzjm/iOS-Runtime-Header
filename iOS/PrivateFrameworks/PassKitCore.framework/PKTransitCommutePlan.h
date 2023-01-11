//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSString, PKPassField;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_fieldsByKey;
    NSString *_identifier;
    NSArray *_deviceAccountIdentifiers;
    PKPassField *_title;
    NSArray *_details;
    unsigned long long _properties;
    NSDate *_startDate;
    NSDate *_expiryDate;
    NSString *_startDateString;
    NSString *_expiryDateString;
    PKPassField *_usage;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) PKPassField *usage; // @synthesize usage=_usage;
@property(copy, nonatomic) NSString *expiryDateString; // @synthesize expiryDateString=_expiryDateString;
@property(copy, nonatomic) NSString *startDateString; // @synthesize startDateString=_startDateString;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(copy, nonatomic) PKPassField *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *deviceAccountIdentifiers; // @synthesize deviceAccountIdentifiers=_deviceAccountIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_startField;
- (id)_expiryField;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasDisplayableInformation;
@property(readonly, nonatomic) _Bool isPlanAvailable;
@property(readonly, nonatomic) _Bool isPlanDisplayable;
- (id)passFieldForKey:(id)arg1;
- (void)_updateProperties;
- (void)_updateFieldsByKey;

@end
