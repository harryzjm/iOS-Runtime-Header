//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskRequest.h"

@interface CRKIdentityServiceSetMockingStateTaskRequest : CATTaskRequest
{
    _Bool _mockingEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isMockingEnabled) _Bool mockingEnabled; // @synthesize mockingEnabled=_mockingEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
