//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol _SFSettingsAuthenticationRequiring <NSObject>
@property(nonatomic) _Bool hasBeenAuthenticated;
@property(readonly, nonatomic) _Bool showsAuthenticationPromptAsTitle;
@property(readonly, copy, nonatomic) NSString *authenticationPrompt;

@optional
@property(readonly, copy, nonatomic) NSDictionary *customLocalAuthenticationOptions;
- (NSArray *)additionalViewControllersToPushHandlingURLResourceDictionary:(NSDictionary *)arg1 didAuthenticate:(_Bool)arg2;
@end

