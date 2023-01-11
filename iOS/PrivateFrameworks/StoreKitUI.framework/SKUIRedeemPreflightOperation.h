//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemViewControllerLegacy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIRedeemPreflightOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _loadsRedeemCodeMetadata;
    CDUnknownBlockType _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
    _Bool _forcesAuthentication;
    SKUIRedeemViewControllerLegacy *_redeemViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forcesAuthentication; // @synthesize forcesAuthentication=_forcesAuthentication;
@property(nonatomic) __weak SKUIRedeemViewControllerLegacy *redeemViewController; // @synthesize redeemViewController=_redeemViewController;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (id)_authenticationContext;
- (void)main;
@property(retain) SKUIRedeemConfiguration *redeemConfiguration;
@property(copy) CDUnknownBlockType outputBlock;
@property _Bool loadsRedeemCodeMetadata;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(_Bool)arg3;
- (id)init;
- (id)_initSKUIRedeemPreflightOperation;

@end
