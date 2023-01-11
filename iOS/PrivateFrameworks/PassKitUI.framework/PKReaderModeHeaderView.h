//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface PKReaderModeHeaderView
{
    PKPaymentSetupProduct *_product;
    NSArray *_resourceKeys;
    long long _context;
    NSDictionary *_readerModeResources;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureForCurrentState;
- (id)_subtitleForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3;

@end

