//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayTypeController, HKUnitPreferenceController, NSObject;
@protocol HKDataMetadataObject;

@interface HKDataMetadataDetailSection
{
    NSObject<HKDataMetadataObject> *_object;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) NSObject<HKDataMetadataObject> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_loadMetadataValues;
- (id)initWithWorkoutEvent:(id)arg1;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;

@end

