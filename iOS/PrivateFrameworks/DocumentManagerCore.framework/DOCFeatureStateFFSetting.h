//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DOCFeatureStateFFSetting
{
    NSString *_domainID;
    NSString *_featureID;
    long long _valueMode;
}

- (void).cxx_destruct;
@property long long valueMode; // @synthesize valueMode=_valueMode;
@property(retain) NSString *featureID; // @synthesize featureID=_featureID;
@property(retain) NSString *domainID; // @synthesize domainID=_domainID;
- (id)initWithDomainID:(id)arg1 featureID:(id)arg2 valueMode:(long long)arg3;

@end
