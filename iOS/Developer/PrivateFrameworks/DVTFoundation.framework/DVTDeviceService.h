//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTDevice, DVTDeviceCapability, DVTExtension;

@interface DVTDeviceService : NSObject
{
    DVTDevice *_device;
    DVTExtension *_extension;
    DVTDeviceCapability *_currentCapability;
}

+ (id)capability;
- (void).cxx_destruct;
@property(readonly) DVTDeviceCapability *currentCapability; // @synthesize currentCapability=_currentCapability;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

