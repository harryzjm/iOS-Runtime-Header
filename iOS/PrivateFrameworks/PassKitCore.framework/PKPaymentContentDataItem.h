//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem
{
    PKPaymentContentItem *_contentItem;
}

+ (_Bool)supportsMultipleItems;
+ (long long)dataType;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithContentItem:(id)arg1;

@end

