//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriMobileBluetoothDeviceDataSource;

@interface CSSiriBluetoothManager : NSObject
{
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)deviceWithUID:(id)arg1;
- (id)deviceWithAddress:(id)arg1;
- (void)prewarmDeviceWithIdentifier:(id)arg1;
- (id)_init;

@end
