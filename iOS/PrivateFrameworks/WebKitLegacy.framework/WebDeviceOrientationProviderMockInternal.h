//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> m_core;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)setOrientation:(id)arg1;
- (id)init;

@end

