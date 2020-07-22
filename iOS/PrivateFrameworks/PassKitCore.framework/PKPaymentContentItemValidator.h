//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentContentItem;

@interface PKPaymentContentItemValidator : NSObject <PKPaymentValidating>
{
    PKPaymentContentItem *_item;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
@property(readonly, nonatomic) PKPaymentContentItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithContentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
