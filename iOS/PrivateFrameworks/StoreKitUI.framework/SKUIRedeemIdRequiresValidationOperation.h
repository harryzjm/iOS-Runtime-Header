//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

#import <StoreKitUI/ISDialogOperationDelegate-Protocol.h>

@class NSString, SKUIRedeemViewController;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate>
{
    CDUnknownBlockType _resultBlock;
    SKUIRedeemViewController *_redeemViewController;
}

@property(nonatomic) __weak SKUIRedeemViewController *redeemViewController; // @synthesize redeemViewController=_redeemViewController;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (void)_logResultsForSuccess:(_Bool)arg1 shouldVerify:(_Bool)arg2 failureReason:(id)arg3 error:(id)arg4;
- (id)_subOperationWithBagKey:(id)arg1;
- (id)_authenticationContext;
- (_Bool)_performAuthentication;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)main;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

