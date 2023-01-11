//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLWebAuthIdentity : NSObject
{
    NSString *_username;
    NSString *_token;
    NSString *_displayName;
    NSString *_refreshToken;
    NSString *_youTubeUsername;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *youTubeUsername; // @synthesize youTubeUsername=_youTubeUsername;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithUsername:(id)arg1 token:(id)arg2 displayName:(id)arg3 refreshToken:(id)arg4 youTubeUsername:(id)arg5;

@end
