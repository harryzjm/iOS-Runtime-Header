//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface HKClinicalSharingSyncInfo : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
    NSSet *_accountIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)arg1 accountIdentifiers:(id)arg2;

@end
