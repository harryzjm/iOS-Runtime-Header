//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/NSObject-Protocol.h>

@class FCAVAsset, NSString, NSURL;

@protocol FCAVAssetFactoryType <NSObject>
- (FCAVAsset *)assetWithIdentifier:(NSString *)arg1 remoteURL:(NSURL *)arg2 overrideMIMEType:(NSString *)arg3;
@end

