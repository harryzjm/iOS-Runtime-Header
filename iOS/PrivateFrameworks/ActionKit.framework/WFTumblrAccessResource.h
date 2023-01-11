//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource : WFAccessResource
{
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
}

+ (void)setTumblrOAuthTokenSecret:(id)arg1;
+ (id)tumblrOAuthTokenSecret;
+ (void)setTumblrOAuthToken:(id)arg1;
+ (id)tumblrOAuthToken;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *OAuthTokenSecret; // @synthesize OAuthTokenSecret=_OAuthTokenSecret;
@property(copy, nonatomic) NSString *OAuthToken; // @synthesize OAuthToken=_OAuthToken;
- (void)logOut;
- (_Bool)canLogOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
