//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class FBKUserLoginInfo;

@protocol FBKLoginManagerDelegate <NSObject>
- (void)didLogOutWithCompletion:(void (^)(void))arg1;
- (void)didLogInWithLoginUserInfo:(FBKUserLoginInfo *)arg1 completion:(void (^)(void))arg2;
@end

