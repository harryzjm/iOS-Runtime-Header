//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequest : NSObject
{
    long long _type;
    NSString *_authenticationToken;
    NSString *_SAMLRequest;
    NSArray *_attributeNames;
    NSString *_requestorVerificationToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *requestorVerificationToken; // @synthesize requestorVerificationToken=_requestorVerificationToken;
@property(copy, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
@property(copy, nonatomic) NSString *SAMLRequest; // @synthesize SAMLRequest=_SAMLRequest;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

