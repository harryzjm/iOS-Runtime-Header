//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUICategory, SKUICategoryArtworkLoader, UIImage;

@protocol SKUICategoryArtworkLoaderObserver <NSObject>

@optional
- (void)categoryArtworkLoader:(SKUICategoryArtworkLoader *)arg1 didLoadImage:(UIImage *)arg2 forCategory:(SKUICategory *)arg3;
@end

