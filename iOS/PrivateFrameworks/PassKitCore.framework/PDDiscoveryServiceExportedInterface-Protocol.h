//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, PKRule;

@protocol PDDiscoveryServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)removeDiscoveryUserNotificationsWithCompletion:(void (^)(NSError *))arg1;
- (void)fireEngagementEventNamed:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)evaluateRulesWithIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteRuleWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertRule:(PKRule *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rulesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)removeDiscoveryMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertDiscoveryEngagementMessages:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertDiscoveryItems:(NSArray *)arg1 discoveryArticleLayouts:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)discoveryItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)updateDiscoveryManifestWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchUserProperties:(NSArray *)arg1 withParameters:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)endReportingDiscoveryAnalyticsCompletion:(void (^)(NSError *))arg1;
- (void)beginReportingDiscoveryAnalyticsCompletion:(void (^)(NSError *))arg1;
- (void)discoveryItemWithIdentifier:(NSString *)arg1 callToAction:(long long)arg2 wasScrolledToTheBottom:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)discoveryItemWithIdentifier:(NSString *)arg1 callToAction:(long long)arg2 isScrollable:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (void)discoveryItemWithIdentifier:(NSString *)arg1 launchedWithReferralSource:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)completedDiscoveryItemCTAWithCompletion:(void (^)(NSError *))arg1;
- (void)tappedDiscoveryItemCTA:(long long)arg1 itemIdentifier:(NSString *)arg2 cardSize:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)removedAllDiscoveryItemsWithCompletion:(void (^)(NSError *))arg1;
- (void)dismissedDiscoveryItemWithIdentifier:(NSString *)arg1 callToAction:(long long)arg2 cardSize:(long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)expandedDiscoveryItemWithIdentifier:(NSString *)arg1 callToAction:(long long)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 cardSize:(long long)arg5 completion:(void (^)(NSError *))arg6;
- (void)displayedDiscoveryItemWithIdentifier:(NSString *)arg1 isWelcomeCard:(_Bool)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 callToAction:(long long)arg5 cardSize:(long long)arg6 completion:(void (^)(NSError *))arg7;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(NSString *)arg1 forAction:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateDiscoveryItemWithIdentifier:(NSString *)arg1 forAction:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)dialogRequestsForPlacement:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)dismissedDiscoveryItems:(void (^)(NSArray *, NSError *))arg1;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(NSString *)arg1 active:(unsigned long long)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(void (^)(NSError *))arg1;
- (void)manifestAllowsMiniCardsWithCompletion:(void (^)(NSError *, _Bool))arg1;
- (void)discoveryArticleLayoutForItemWithIdentifier:(NSString *)arg1 completion:(void (^)(PKDiscoveryArticleLayout *, NSError *))arg2;
- (void)discoveryArticleLayoutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

