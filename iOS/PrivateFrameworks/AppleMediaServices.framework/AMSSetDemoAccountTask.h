//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask
{
    AMSProcessInfo *_clientInfo;
    NSString *_password;
    NSString *_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)performTask;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end
