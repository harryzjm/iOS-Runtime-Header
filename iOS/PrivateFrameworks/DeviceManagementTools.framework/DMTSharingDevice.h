//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATSharingDevice.h>

@class SFDevice;

@interface DMTSharingDevice : CATSharingDevice
{
    SFDevice *_sharingDevice;
}

+ (unsigned long long)devicePairingStateFromSFPairState:(unsigned int)arg1;
+ (_Bool)deviceIsPairedAccordingToFlags:(unsigned int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SFDevice *sharingDevice; // @synthesize sharingDevice=_sharingDevice;
- (id)underlyingDevice;
- (id)initWithDevice:(id)arg1;

@end
