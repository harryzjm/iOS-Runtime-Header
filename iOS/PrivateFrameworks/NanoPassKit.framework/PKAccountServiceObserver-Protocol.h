//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, PKAccount, PKPayLaterCardMagnitudes, PKPayLaterFinancingPlan;

@protocol PKAccountServiceObserver <NSObject>

@optional
- (void)didUpdateAccountEnhancedMerchants:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)didUpdateAccountPromotions:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)payLaterCardMagnitudesChanged:(PKPayLaterCardMagnitudes *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanRemoved:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)accountFinancingPlanUpdated:(PKPayLaterFinancingPlan *)arg1 oldFinancingPlan:(PKPayLaterFinancingPlan *)arg2 accountIdentifier:(NSString *)arg3;
- (void)accountFinancingPlanAdded:(PKPayLaterFinancingPlan *)arg1 accountIdentifier:(NSString *)arg2;
- (void)didUpdatePaymentFundingSources:(NSArray *)arg1 accountIdentifier:(NSString *)arg2;
- (void)physicalCardsChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)accountUsersChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(NSString *)arg1;
- (void)statementsChangedForAccountIdentifier:(NSString *)arg1;
- (void)accountRemoved:(PKAccount *)arg1;
- (void)accountChanged:(PKAccount *)arg1;
- (void)accountAdded:(PKAccount *)arg1;
@end

