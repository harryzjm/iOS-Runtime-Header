//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFEchoRequest
{
    NSString *_echo;
    NSString *_resultStatus;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) NSString *echo; // @synthesize echo=_echo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
