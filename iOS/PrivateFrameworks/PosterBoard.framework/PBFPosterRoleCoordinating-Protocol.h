//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/BSInvalidatable-Protocol.h>
#import <PosterBoard/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet, NSString, PBFPosterDataStoreEvent, PRPosterCollection, PRPosterConfiguration;
@protocol PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving, PBFPosterExtensionDataStorageRetrieving, PBFPosterRoleCoordinatorTransitionContext;

@protocol PBFPosterRoleCoordinating <NSObject, BSInvalidatable>
+ (NSSet *)supportedChangeTypes;
+ (NSSet *)subscribedEvents;
+ (NSSet *)protectedAttributes;
+ (NSSet *)supportedAttributes;
@property unsigned long long maximumNumberOfPosters;
@property(readonly) PRPosterCollection *posterCollection;
@property(readonly) NSString *role;
- (_Bool)revertChangesFromEvents:(NSArray *)arg1;
- (_Bool)updateCoordinatorWithChanges:(NSArray *)arg1 changeHandler:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg2 emitEvents:(out id *)arg3 error:(out id *)arg4;
- (PRPosterConfiguration *)determineActivePosterConfigurationForStorage:(id <PBFPosterExtensionDataStorageRetrieving>)arg1 context:(id <PBFPosterRoleCoordinatorTransitionContext>)arg2;
- (PRPosterConfiguration *)determineActivePosterConfigurationForContext:(id <PBFPosterRoleCoordinatorTransitionContext>)arg1;
- (_Bool)notifyEventWasReceived:(PBFPosterDataStoreEvent *)arg1 changes:(out id *)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (_Bool)validateEventIsRelevent:(PBFPosterDataStoreEvent *)arg1;
- (NSDictionary *)attributesForConfiguration:(PRPosterConfiguration *)arg1 ofType:(NSSet *)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (NSDictionary *)defaultAttributesForNewPosterFromProvider:(NSString *)arg1;
- (NSError *)setupRoleIfNecessaryWithStorage:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg1;
@end

