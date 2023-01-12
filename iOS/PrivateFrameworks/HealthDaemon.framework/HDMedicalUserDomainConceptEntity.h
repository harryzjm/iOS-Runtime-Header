//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntitySchema-Protocol.h>

@class NSString;

@interface HDMedicalUserDomainConceptEntity <HDHealthEntitySchema>
{
}

+ (id)pruneWithProfile:(id)arg1 nowDate:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
+ (id)refreshOntologyContentForUserDomainConcept:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (id)deduplicateUserDomainConcept:(id)arg1 with:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)arg1;
+ (Class)userDomainConceptClass;
+ (_Bool)willDeleteConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)updateConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)insertConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (id)privateDataEntities;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)privateSubEntities;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
