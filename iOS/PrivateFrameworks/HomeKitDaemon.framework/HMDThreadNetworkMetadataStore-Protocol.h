//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HMDThreadNetworkMetadataStore <NSObject>
- (void)retrieveMetadataForNetworkID:(NSString *)arg1 completion:(void (^)(HMThreadNetworkMetadata *, NSError *))arg2;
@end
