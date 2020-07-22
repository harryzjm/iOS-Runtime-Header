//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIHealthSettingsForceUpdatable-Protocol.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable>
{
    FIUIHealthSettingsDatePicker *_datePickerView;
    CDUnknownBlockType _dateOfBirthUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dateOfBirthUpdateHandler; // @synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler;
@property(retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
- (void).cxx_destruct;
- (void)forceUpdate;
- (void)setDateOfBirth:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
