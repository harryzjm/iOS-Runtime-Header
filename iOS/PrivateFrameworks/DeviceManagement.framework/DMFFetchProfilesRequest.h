//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFFetchProfilesRequest : CATTaskRequest
{
    unsigned long long _filterFlags;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) unsigned long long filterFlags; // @synthesize filterFlags=_filterFlags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

