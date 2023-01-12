//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSPProxyAgentStats
{
    NSString *_tierType;
    unsigned long long _ingressProxyTokensAdded;
    unsigned long long _egressProxyTokensAdded;
    unsigned long long _ingressProxyLowWaterMarkHitCount;
    unsigned long long _egressProxyLowWaterMarkHitCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long egressProxyLowWaterMarkHitCount; // @synthesize egressProxyLowWaterMarkHitCount=_egressProxyLowWaterMarkHitCount;
@property(nonatomic) unsigned long long ingressProxyLowWaterMarkHitCount; // @synthesize ingressProxyLowWaterMarkHitCount=_ingressProxyLowWaterMarkHitCount;
@property(nonatomic) unsigned long long egressProxyTokensAdded; // @synthesize egressProxyTokensAdded=_egressProxyTokensAdded;
@property(nonatomic) unsigned long long ingressProxyTokensAdded; // @synthesize ingressProxyTokensAdded=_ingressProxyTokensAdded;
@property(retain, nonatomic) NSString *tierType; // @synthesize tierType=_tierType;
- (id)analyticsDict;
- (id)eventName;

@end
