//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentTransactionDetailAmountLineItem-Protocol.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemTotal : NSObject <PKPaymentTransactionDetailAmountLineItem>
{
    NSString *_label;
    NSString *_value;
    _Bool _hasTrailingLineSeperator;
}

@property(nonatomic) _Bool hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lineItemType;
@property(readonly, nonatomic) _Bool isEmphasized;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *label;
- (id)initWithAmount:(id)arg1 totalType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

