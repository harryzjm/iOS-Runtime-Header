//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage
{
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
- (unsigned long long)type;
- (id)initWithDescriptor:(id)arg1;

@end

