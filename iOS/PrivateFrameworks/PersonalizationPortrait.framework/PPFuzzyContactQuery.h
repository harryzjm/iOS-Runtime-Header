//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface PPFuzzyContactQuery : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _onlyAddressBook;
    NSSet *_sourceBundleIds;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool onlyAddressBook; // @synthesize onlyAddressBook=_onlyAddressBook;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSSet *sourceBundleIds; // @synthesize sourceBundleIds=_sourceBundleIds;
- (_Bool)isEqualToFuzzyContactQuery:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
