//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelDataSource-Protocol.h>

@class NSString, VNEntityIdentificationModelTrainedModel;

__attribute__((visibility("hidden")))
@interface VNReadOnlyEntityIdentificationModel <VNEntityIdentificationModelDataSource>
{
    VNEntityIdentificationModelTrainedModel *_trainedModel;
}

+ (_Bool)isReadOnly;
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;
- (id)observationCountsForAllEntities;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;
- (id)trainedModelWithCanceller:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 trainedModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
