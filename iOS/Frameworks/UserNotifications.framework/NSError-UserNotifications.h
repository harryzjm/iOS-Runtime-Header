//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (UserNotifications)
+ (id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2;
+ (id)_un_descriptionForUNPrivateErrorCode:(long long)arg1;
+ (id)_un_descriptionForUNErrorCode:(long long)arg1;
+ (id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2;
@end

