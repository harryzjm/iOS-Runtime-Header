//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface WDDeviceStoredDataViewController
{
    HKDevice *_device;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void)deleteAllStoredData;
- (_Bool)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end

