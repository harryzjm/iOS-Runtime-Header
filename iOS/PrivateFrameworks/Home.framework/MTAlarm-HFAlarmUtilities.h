//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/MTAlarm.h>

@interface MTAlarm (HFAlarmUtilities)
+ (_Bool)hf_verifyThatAlarmsAreConsistent:(id)arg1;
+ (id)hf_alarmsMatchingAlarmId:(id)arg1 withinItemArray:(id)arg2;
+ (_Bool)hf_areAlarms:(id)arg1 equalToAlarms:(id)arg2 includeModificationDate:(_Bool)arg3;
+ (id)hf_buildAlarmsFromCollectionSettingItems:(id)arg1;
+ (id)hf_buildAlarmFromCollectionSettingItem:(id)arg1;
@end

