//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudDriveCore/NSObject-Protocol.h>

@class CKShareMetadata, NSURL;

@protocol CKXPCShareDaemon <NSObject>
- (void)handleCloudKitShareMetadata:(CKShareMetadata *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (oneway void)willAcceptShareAtURL:(NSURL *)arg1;
@end

