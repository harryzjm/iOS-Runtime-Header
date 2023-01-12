//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, HKClinicalGateway, HKSignedClinicalDataIssuer, NSString;

@interface HKClinicalAccountProvenance : NSObject <NSCopying, NSSecureCoding>
{
    HKClinicalGateway *_gateway;
    HKSignedClinicalDataIssuer *_signedClinicalDataIssuer;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKSignedClinicalDataIssuer *signedClinicalDataIssuer; // @synthesize signedClinicalDataIssuer=_signedClinicalDataIssuer;
@property(readonly, nonatomic) HKClinicalGateway *gateway; // @synthesize gateway=_gateway;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) HKClinicalBrand *brand;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long type;
- (id)initWithSignedClinicalDataIssuer:(id)arg1;
- (id)initWithGateway:(id)arg1;

@end
