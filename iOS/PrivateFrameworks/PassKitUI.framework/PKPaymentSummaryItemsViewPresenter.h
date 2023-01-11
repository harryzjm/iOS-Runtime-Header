//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentAuthorizationViewPresenting-Protocol.h>

@class NSString;

@interface PKPaymentSummaryItemsViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>
{
}

+ (void)presentView:(id)arg1 withDataItem:(id)arg2 forPaymentRequest:(id)arg3;
+ (void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(_Bool)arg3 forPaymentRequest:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

