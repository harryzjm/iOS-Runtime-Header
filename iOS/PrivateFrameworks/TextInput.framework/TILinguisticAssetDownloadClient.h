//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/TILinguisticAssetDownloading-Protocol.h>

@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>
{
}

+ (CDUnknownBlockType)_internalHandlerForHandler:(CDUnknownBlockType)arg1 connection:(id)arg2;
+ (id)_dispatchQueue;
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_newXPCConnection;

@end
