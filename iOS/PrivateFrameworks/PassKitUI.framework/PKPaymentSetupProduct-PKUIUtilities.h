//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentSetupProduct.h>

@interface PKPaymentSetupProduct (PKUIUtilities)
- (void)resetCache;
- (id)logoCachedImage:(CDUnknownBlockType)arg1;
- (id)thumbnailCachedImageForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)plasticCardCachedImage:(CDUnknownBlockType)arg1;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(CDUnknownBlockType)arg1;
- (void)_commonCachedImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end
