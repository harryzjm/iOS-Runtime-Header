//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSNewLocationInformant
{
}

+ (_Bool)location:(struct CLLocationCoordinate2D)arg1 isFarFromLocation:(struct CLLocationCoordinate2D)arg2;
+ (_Bool)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)natureCategories;
+ (id)regionOfInterestCategories;
+ (id)areaOfInterestCategories;
+ (_Bool)doesRegion:(id)arg1 containLocation:(id)arg2;
+ (_Bool)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2;
+ (struct CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D)arg1;
+ (id)shiftedLocationFromOriginalLocation:(id)arg1;
+ (id)businessItemsForRegion:(id)arg1;
+ (id)createPlaceForBusinessItem:(id)arg1;
+ (id)_categoriesDescriptionFromCategories:(id)arg1;
+ (id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4;
+ (id)pointOfInterestCategories;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)locationRegionOfInterestCluesForInputClue:(id)arg1;
- (id)locationPointOfInterestCluesForInputClue:(id)arg1;
- (id)locationAreaOfInterestCluesForInputClue:(id)arg1;
- (id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(_Bool)arg6 precision:(double)arg7 cache:(id)arg8;
- (id)_regionOfInterestTraits;
- (id)_pointOfInterestTraits;
- (id)_regionOfInterestCategories;

@end
