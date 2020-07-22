//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSString, NSUUID, NSXPCListenerEndpoint, PBItemCollection;

@protocol PBClientToServerProtocol <NSObject>
- (void)getAllPasteboardsCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)performJanitorialTasksCompletionBlock:(void (^)(void))arg1;
- (void)didPasteContentsFromPasteboardWithName:(NSString *)arg1 UUID:(NSUUID *)arg2 completionBlock:(void (^)(void))arg3;
- (void)requestItemFromPasteboardWithName:(NSString *)arg1 UUID:(NSUUID *)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(NSString *)arg4 completionBlock:(void (^)(NSData *, PBSecurityScopedURLWrapper *, NSError *))arg5;
- (void)deletePersistentPasteboardWithName:(NSString *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)savePasteboard:(PBItemCollection *)arg1 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg2 completionBlock:(void (^)(unsigned long long, long long, NSError *))arg3;
- (void)localGeneralPasteboardCompletionBlock:(void (^)(PBItemCollection *, NSError *))arg1;
- (void)pasteboardWithName:(NSString *)arg1 createIfNeeded:(_Bool)arg2 completionBlock:(void (^)(PBItemCollection *, NSError *))arg3;
- (void)helloCompletionBlock:(void (^)(void))arg1;
@end

