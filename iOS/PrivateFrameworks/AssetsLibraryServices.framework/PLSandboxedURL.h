//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface PLSandboxedURL : NSURL
{
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonPLSandboxedURLInitialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2;

@end
