//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL
{
    TSUSandboxedURL *_originalSandboxedURL;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)originalSandboxedURLForNormalizing;
- (_Bool)hasSandboxAccess;
- (id)initWithURL:(id)arg1 originalSandboxedURL:(id)arg2;

@end
