//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>
{
    NSArray *_blacklistedDestinations;
    NSDate *_expiryDate;
    _Bool _destinationsMustBeInContacts;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool destinationsMustBeInContacts; // @synthesize destinationsMustBeInContacts=_destinationsMustBeInContacts;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSArray *blacklistedDestinations; // @synthesize blacklistedDestinations=_blacklistedDestinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBlacklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(_Bool)arg3;
- (id)init;

@end
