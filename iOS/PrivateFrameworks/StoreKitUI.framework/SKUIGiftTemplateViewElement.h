//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftTemplateViewElement
{
    long long _giftType;
    NSString *_productBuyParams;
    long long _productItemIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long giftType; // @synthesize giftType=_giftType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIItem *productItem;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
