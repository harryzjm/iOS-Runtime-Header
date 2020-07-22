//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest : CATTaskRequest
{
    _Bool _includeTemporary;
    NSString *_leaderIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool includeTemporary; // @synthesize includeTemporary=_includeTemporary;
@property(copy, nonatomic) NSString *leaderIdentifier; // @synthesize leaderIdentifier=_leaderIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

