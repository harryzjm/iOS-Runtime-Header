//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileCoordinationDebugInfoXPCInterface-Protocol.h>

@class NSFileProviderPresenterInfo, NSFileProvidingInfo, NSString, NSURL;

@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInterface>
- (void)movingItemAtURL:(NSURL *)arg1 requiresProvidingWithDestinationURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(NSString *)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterOfURL:(NSURL *)arg2 withInfo:(NSFileProviderPresenterInfo *)arg3;
- (void)providePhysicalItemForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(NSString *)arg2;
- (void)provideItemAtURL:(NSURL *)arg1 withInfo:(NSFileProvidingInfo *)arg2 completionHandler:(void (^)(NSFileProvidingResponse *))arg3;
- (void)checkInProviderWithReply:(void (^)(_Bool))arg1;
@end

