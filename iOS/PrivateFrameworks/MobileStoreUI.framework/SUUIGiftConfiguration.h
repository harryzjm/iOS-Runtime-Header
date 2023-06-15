//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString, NSURL, SUUIClientContext;

__attribute__((visibility("hidden")))
@interface SUUIGiftConfiguration : NSObject
{
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SUUIClientContext *_clientContext;
    NSString *_currencySymbol;
    long long _currencySymbolPosition;
    NSArray *_fixedGiftAmountLabels;
    NSArray *_fixedGiftAmountValues;
    NSString *_senderName;
    struct _NSRange _giftAmountRange;
    NSURL *_giftPurchaseURL;
    NSURL *_giftValidationURL;
    long long _maximumMessageLength;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
    NSString *_senderEmailAddress;
    NSString *_storeFrontName;
    NSArray *_themes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *themes; // @synthesize themes=_themes;
@property(readonly, nonatomic) NSString *storeFrontName; // @synthesize storeFrontName=_storeFrontName;
@property(readonly, nonatomic) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly, nonatomic) long long maximumMessageLength; // @synthesize maximumMessageLength=_maximumMessageLength;
@property(readonly, nonatomic) NSURL *giftValidationURL; // @synthesize giftValidationURL=_giftValidationURL;
@property(readonly, nonatomic) NSURL *giftPurchaseURL; // @synthesize giftPurchaseURL=_giftPurchaseURL;
@property(readonly, nonatomic) struct _NSRange giftAmountRange; // @synthesize giftAmountRange=_giftAmountRange;
@property(readonly, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(readonly, nonatomic) NSArray *fixedGiftAmountValues; // @synthesize fixedGiftAmountValues=_fixedGiftAmountValues;
@property(readonly, nonatomic) NSArray *fixedGiftAmountLabels; // @synthesize fixedGiftAmountLabels=_fixedGiftAmountLabels;
@property(readonly, nonatomic) long long currencySymbolPosition; // @synthesize currencySymbolPosition=_currencySymbolPosition;
@property(readonly, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(readonly, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;
- (void)_loadThemeImages;
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (id)logoImageForCharity:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)loadCachedConfiguration;
- (id)charityForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;

@end

