//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, FARequestConfigurator;

@interface FASharedServicesRequest : AARequest
{
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAppleAccount:(id)arg1 urlString:(id)arg2;

@end

