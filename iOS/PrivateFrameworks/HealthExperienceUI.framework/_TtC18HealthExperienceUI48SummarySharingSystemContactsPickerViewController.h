//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC18HealthExperienceUI48SummarySharingSystemContactsPickerViewController : OBWelcomeController
{
    MISSING_TYPE *selectionFlowContext;
    MISSING_TYPE *healthExperienceStore;
    MISSING_TYPE *healthStore;
    MISSING_TYPE *state;
    MISSING_TYPE *sharingStore;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)summarySharingEntryStore:(id)arg1 didUpdateReachabilityStatus:(id)arg2 error:(id)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

