//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HKOAuth2)
+ (id)hk_OAuth2_errorFromResponse:(id)arg1;
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)hk_OAuth2_error:(long long)arg1;
- (_Bool)hk_OAuth2_isOAuth2Error;
@end
