//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCDADocumentSample.h>

@interface HKCDADocumentSample (HKDataMetadataReportSection)
- (id)detailedReportName;
- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasAssociatedReport;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;
@end
