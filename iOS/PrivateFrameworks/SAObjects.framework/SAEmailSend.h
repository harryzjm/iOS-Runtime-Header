//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SAEmailEmail;

@interface SAEmailSend
{
}

+ (id)sendWithDictionary:(id)arg1 context:(id)arg2;
+ (id)send;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAEmailEmail *email;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

