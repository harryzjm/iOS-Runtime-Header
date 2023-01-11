//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMResidentDevice, NSString;
@protocol HFHomeKitObject;

@interface HFResidentDeviceItem <HFHomeKitItemProtocol, NSCopying>
{
    HMResidentDevice *_residentDevice;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithResidentDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
