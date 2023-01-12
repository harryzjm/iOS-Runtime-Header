//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogProgramReference, ManagedCatalogWorkoutReference, NSString;

@interface ManagedOrderedIdentifier : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramContributors; // @dynamic catalogProgramContributors;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramEquipment; // @dynamic catalogProgramEquipment;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramModalities; // @dynamic catalogProgramModalities;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramMusicGenres; // @dynamic catalogProgramMusicGenres;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramThemes; // @dynamic catalogProgramThemes;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramTrainers; // @dynamic catalogProgramTrainers;
@property(nonatomic, retain) ManagedCatalogProgramReference *catalogProgramWorkouts; // @dynamic catalogProgramWorkouts;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutBodyFocuses; // @dynamic catalogWorkoutBodyFocuses;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutContributors; // @dynamic catalogWorkoutContributors;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutEquipment; // @dynamic catalogWorkoutEquipment;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutMusicGenres; // @dynamic catalogWorkoutMusicGenres;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutSkillLevels; // @dynamic catalogWorkoutSkillLevels;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutThemes; // @dynamic catalogWorkoutThemes;
@property(nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutTrainers; // @dynamic catalogWorkoutTrainers;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int index; // @dynamic index;

@end
