//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskRequest.h"

@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest
{
    NSString *_recipient;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
