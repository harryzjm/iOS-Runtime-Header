//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDTinkerProfile
{
}

- (void)triggerDeletion;
- (_Bool)setDSID:(id)arg1 error:(id *)arg2;
- (id)dsidWithError:(id *)arg1;
- (_Bool)setPairedNRDeviceUUID:(id)arg1 error:(id *)arg2;
- (id)pairedNRDeviceUUIDWithError:(id *)arg1;
- (void)awakeFromDisk;

@end
