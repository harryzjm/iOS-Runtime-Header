//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskRequest.h"

@class NSArray;

@interface CRKFetchDevicesRequest : CATTaskRequest
{
    NSArray *_deviceIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
