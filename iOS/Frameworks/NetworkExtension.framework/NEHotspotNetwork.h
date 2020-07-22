//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEHotspotNetwork : NSObject
{
    struct __CNNetwork *_network;
}

@property(readonly, getter=isChosenHelper) _Bool chosenHelper;
@property(readonly, getter=didJustJoin) _Bool justJoined;
@property(readonly, getter=didAutoJoin) _Bool autoJoined;
@property(readonly, getter=isSecure) _Bool secure;
- (void)setPassword:(id)arg1;
- (void)setConfidence:(long long)arg1;
@property(readonly) double signalStrength;
@property(readonly) NSString *BSSID;
@property(readonly) NSString *SSID;
@property(readonly) NSString *interfaceName;
@property struct __CNNetwork *network; // @synthesize network=_network;
- (id)initWithNetwork:(struct __CNNetwork *)arg1;
- (id)description;
- (void)dealloc;

@end

