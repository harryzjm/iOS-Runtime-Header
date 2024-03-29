//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNPersonsModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VNReadOnlyPersonsModel : VNPersonsModel
{
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;
+ (_Bool)isReadOnly;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)personUniqueIdentifiers;
- (unsigned long long)personCount;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (_Bool)dropCurrentFaceModelAndReturnError:(id *)arg1;
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

