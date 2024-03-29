//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKDiagnosticTestResult.h>

@interface HKDiagnosticTestResult (Displayable)
- (id)titleDisplayStringForDetailViewController;
- (void)_displayItemsForCodedValueCollection:(id)arg1 healthRecordsStore:(id)arg2 preferredStyle:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_displayItemsForValuePreferedStyle:(long long)arg1 healthRecordsStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)codings;
- (id)title;
- (id)chartableCodedQuantitySet;
@end

