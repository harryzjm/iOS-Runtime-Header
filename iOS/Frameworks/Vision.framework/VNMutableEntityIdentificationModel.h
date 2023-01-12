//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelTrainingDataDelegate-Protocol.h>

@class VNEntityIdentificationModelTrainingData;

@interface VNMutableEntityIdentificationModel <VNEntityIdentificationModelTrainingDataDelegate>
{
    VNEntityIdentificationModelTrainingData *_trainingData;
}

+ (id)modelWithConfiguration:(id)arg1 error:(id *)arg2;
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;
+ (id)modelWithConfiguration:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;
+ (_Bool)canCreateModelOfClass:(Class)arg1 withObjects:(id)arg2 error:(id *)arg3;
+ (id)modelFromPersonsModel:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)entityIdentificationModelTrainingDataWasModified:(id)arg1;
- (_Bool)removeEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllObservationsFromEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeObservations:(id)arg1 fromEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)addObservations:(id)arg1 toEntityWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)validateWithCanceller:(id)arg1 error:(id *)arg2;
- (_Bool)addPersonWithUniqueIdentifier:(id)arg1 fromPersonsModel:(id)arg2 error:(id *)arg3;
- (_Bool)addAllPersonsFromPersonsModel:(id)arg1 error:(id *)arg2;

@end
