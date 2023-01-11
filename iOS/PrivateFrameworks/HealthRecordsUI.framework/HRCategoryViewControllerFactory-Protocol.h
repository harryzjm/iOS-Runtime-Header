//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/HRRecordViewControllerFactory-Protocol.h>

@class UIViewController, WDMedicalRecordCategory;

@protocol HRCategoryViewControllerFactory <HRRecordViewControllerFactory>
- (UIViewController *)makeAlphabeticalViewControllerForCategory:(WDMedicalRecordCategory *)arg1;
- (UIViewController *)makeTimelineViewControllerForCategory:(WDMedicalRecordCategory *)arg1 showsInitialSearchBar:(_Bool)arg2;
- (UIViewController *)makeViewControllerForCategory:(WDMedicalRecordCategory *)arg1;
@end
