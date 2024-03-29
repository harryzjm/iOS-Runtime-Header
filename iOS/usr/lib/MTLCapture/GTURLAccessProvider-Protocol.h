//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@protocol GTURLAccessProvider
- (void)transferIdentifier:(NSURL *)arg1 toDevice:(NSString *)arg2 completionHandler:(void (^)(NSURL *))arg3;
- (void)securityScopedURLFromSandboxID:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (NSURL *)urlForPath:(NSString *)arg1;
- (NSURL *)makeURL:(NSURL *)arg1;
@end

