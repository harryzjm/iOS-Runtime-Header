//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSDictionary, NSString;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_pin;
    NSDictionary *_studentInformation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *studentInformation; // @synthesize studentInformation=_studentInformation;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
