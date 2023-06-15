//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/LNConnectionXPCListenerEndpointVendingInterface-Protocol.h>

@class LNAction, LNActionExecutorOptions, LNActionMetadata, LNActionParameterMetadata, LNDynamicOptionsProviderReference, LNFocusConfigurationSuggestionContext, LNQueryRequest, NSArray, NSString, NSUUID;
@protocol LNConnectionClientInterface><NSXPCProxyCreating;

@protocol LNConnectionHostInterface <LNConnectionXPCListenerEndpointVendingInterface>
- (void)fetchStateForAppIntentIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchDestinationMDMAccountIdentifierForAction:(LNAction *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)fetchActionForAppShortcutIdentifier:(NSString *)arg1 completionHandler:(void (^)(LNAppShortcutActionData *, NSError *))arg2;
- (void)fetchActionForAutoShortcutPhrase:(NSString *)arg1 completionHandler:(void (^)(LNAction *, NSError *))arg2;
- (void)fetchActionAppContextFromAction:(LNAction *)arg1 completionHandler:(void (^)(LNFocusConfigurationAppContext *, NSError *))arg2;
- (void)fetchSuggestedFocusActionsForActionMetadata:(LNActionMetadata *)arg1 suggestionContext:(LNFocusConfigurationSuggestionContext *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchSuggestedActionsForStartWorkoutAction:(LNAction *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchActionOutputValueWithIdentifier:(NSUUID *)arg1 completionHandler:(void (^)(LNValue *, NSError *))arg2;
- (void)fetchParameterOptionDefaultValueForActionMetadata:(LNActionMetadata *)arg1 parameterIdentifier:(NSString *)arg2 completionHandler:(void (^)(LNDynamicOption *, NSError *))arg3;
- (void)fetchOptionsDefaultValuesForAction:(LNAction *)arg1 completionHandler:(void (^)(LNAction *, NSError *))arg2;
- (void)fetchOptionsForAction:(LNAction *)arg1 actionMetadata:(LNActionMetadata *)arg2 parameterMetadata:(LNActionParameterMetadata *)arg3 optionsProviderReference:(LNDynamicOptionsProviderReference *)arg4 searchTerm:(NSString *)arg5 localeIdentifier:(NSString *)arg6 completionHandler:(void (^)(LNDynamicOptionsResult *, NSError *))arg7;
- (void)performAction:(LNAction *)arg1 options:(LNActionExecutorOptions *)arg2 executor:(id <LNConnectionClientInterface><NSXPCProxyCreating>)arg3 completionHandler:(void (^)(LNSuccessResult *, NSError *))arg4;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(NSString *)arg1 completionHandler:(void (^)(LNQueryOutput *, NSError *))arg2;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(NSString *)arg1 completionHandler:(void (^)(LNQueryOutput *, NSError *))arg2;
- (void)performSuggestedResultsQueryWithEntityType:(NSString *)arg1 completionHandler:(void (^)(LNQueryOutput *, NSError *))arg2;
- (void)performPropertyQuery:(LNQueryRequest *)arg1 completionHandler:(void (^)(LNQueryOutput *, NSError *))arg2;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)arg1 forEntityIdentifiers:(NSArray *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchViewActionsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchViewEntitiesWithInteractionIDs:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchDisplayRepresentationForActions:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchMetadataWithCompletionHandler:(void (^)(LNBundleMetadata *, NSError *))arg1;
@end

