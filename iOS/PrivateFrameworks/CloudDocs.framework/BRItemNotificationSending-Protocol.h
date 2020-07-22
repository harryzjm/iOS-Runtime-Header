//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol BRItemNotificationSending <BRCancellable>
- (void)watchItemAtURL:(NSURL *)arg1 options:(unsigned short)arg2 gatherReply:(void (^)(NSError *))arg3;
- (void)watchItemsNamesPrefixedBy:(NSString *)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(NSArray *)arg3 gatherReply:(void (^)(NSError *))arg4;
- (void)watchScopes:(unsigned short)arg1 gatherReply:(void (^)(NSError *))arg2;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(NSArray *)arg2 gatherReply:(void (^)(NSError *))arg3;
- (void)boostPriority:(void (^)(void))arg1;
@end

