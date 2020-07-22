//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@class NSData, NSString;

@interface DMFInstallProvisioningProfileRequest : CATTaskRequest
{
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
