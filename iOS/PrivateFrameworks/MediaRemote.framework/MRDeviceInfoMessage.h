//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRDeviceInfo, MRSupportedProtocolMessages;

@interface MRDeviceInfoMessage
{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)encryptionType;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo;
- (id)initWithDeviceInfo:(id)arg1;

@end
