//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount
{
    NSString *_token;
    NSString *_email;
}

+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)accountWithToken:(id)arg1;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (_Bool)isValid;

@end
