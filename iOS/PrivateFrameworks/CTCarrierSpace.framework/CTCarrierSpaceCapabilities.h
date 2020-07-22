//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSCopying-Protocol.h>
#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsServices;
    _Bool _supportsUsage;
    _Bool _supportsPlans;
    _Bool _supportsApplications;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsApplications; // @synthesize supportsApplications=_supportsApplications;
@property(nonatomic) _Bool supportsPlans; // @synthesize supportsPlans=_supportsPlans;
@property(nonatomic) _Bool supportsUsage; // @synthesize supportsUsage=_supportsUsage;
@property(nonatomic) _Bool supportsServices; // @synthesize supportsServices=_supportsServices;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

