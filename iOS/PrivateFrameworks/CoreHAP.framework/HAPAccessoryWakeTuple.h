//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HAPAccessoryWakeTuple : HMFObject
{
    NSString *_wakeAddress;
    long long _wakePort;
    NSData *_wakePattern;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *wakePattern; // @synthesize wakePattern=_wakePattern;
@property(readonly, nonatomic) long long wakePort; // @synthesize wakePort=_wakePort;
@property(readonly, nonatomic) NSString *wakeAddress; // @synthesize wakeAddress=_wakeAddress;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPort:(long long)arg1 wakeAddress:(id)arg2 wakePattern:(id)arg3;

@end
