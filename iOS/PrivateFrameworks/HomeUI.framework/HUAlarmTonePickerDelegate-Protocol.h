//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUAlarmTonePickerViewController, NSNumber, NSString;

@protocol HUAlarmTonePickerDelegate <NSObject>
- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
@end
