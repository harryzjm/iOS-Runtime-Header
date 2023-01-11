//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFCarPlayConnectionTrigger
{
    _Bool _onConnect;
    _Bool _onDisconnect;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
+ (_Bool)isAllowedToRunAutomatically;
@property(nonatomic) _Bool onDisconnect; // @synthesize onDisconnect=_onDisconnect;
@property(nonatomic) _Bool onConnect; // @synthesize onConnect=_onConnect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedTitleWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end
