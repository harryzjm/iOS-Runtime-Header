//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, PLFrequentLocationManager, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject
{
    id <PLLibraryClustererDelegate> _delegate;
    NSCalendar *_calendar;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLFrequentLocationManager *_frequentLocationManager;
}

@property(readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // @synthesize frequentLocationManager=_frequentLocationManager;
@property(readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // @synthesize localCreationDateCreator=_localCreationDateCreator;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <PLLibraryClustererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)momentClustersForMomentsSortedByDate:(id)arg1;
- (id)_momentsWithLocationClusteredByPossibleSource:(id)arg1;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1;
- (id)_startDateComponentsForMomentCluster:(id)arg1;
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg1;
- (id)_momentsSplitWithinDayWithMoments:(id)arg1;
- (_Bool)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1;
- (void)processMonthsAndYearsForMomentClusters:(id)arg1;
- (void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2;
- (void)processMomentsWithAssets:(id)arg1;
- (id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2;

@end
