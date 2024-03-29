//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (GameKitErrors)
+ (id)_gkUnauthenticatedError;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForInternalErrorCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingErrors:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 description:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;
- (id)getUnderlyingErrorWithServerStatusCode:(int)arg1;
- (_Bool)_gkIsUnauthenticatedError;
@end

