//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIBuyButtonDescriptor, SKUIClientContext, SKUIItemState;
@protocol SKUIItemOfferButtonDelegate;

@protocol SKUIViewElementOfferButton <NSObject>
@property(nonatomic) __weak id <SKUIItemOfferButtonDelegate> itemOfferDelegate;
- (_Bool)setValuesUsingBuyButtonDescriptor:(SKUIBuyButtonDescriptor *)arg1 itemState:(SKUIItemState *)arg2 clientContext:(SKUIClientContext *)arg3 animated:(_Bool)arg4;
@end

