//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFPlainAuthScheme : ECAuthenticationScheme
{
}

- (id)humanReadableName;
- (id)name;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)authenticatorClass;

@end
