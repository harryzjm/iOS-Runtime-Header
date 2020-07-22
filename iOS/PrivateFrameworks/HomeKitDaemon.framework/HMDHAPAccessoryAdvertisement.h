//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDHAPAccessoryAdvertisement
{
    _Bool _pairingPresent;
    NSData *_setupHash;
}

@property(retain, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly, nonatomic) _Bool pairingPresent; // @synthesize pairingPresent=_pairingPresent;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(_Bool)arg4 setupHash:(id)arg5;

@end
