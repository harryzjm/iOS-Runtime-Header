//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FIUIHealthSettingsSexPickerController
{
    CDUnknownBlockType _sexUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sexUpdateHandler; // @synthesize sexUpdateHandler=_sexUpdateHandler;
- (void).cxx_destruct;
- (void)setBiologicalSex:(long long)arg1;
- (long long)_biologicalSexForRow:(long long)arg1;
- (void)_updateWithBiologicalSex:(long long)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)forceUpdate;

@end

