//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPSDomainAccessor;

@interface HANanoSettings
{
    NPSDomainAccessor *_domainAccessor;
    NPSDomainAccessor *_globalDomainAccessor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void).cxx_destruct;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (_Bool)shouldUseiCloud;
- (id)currentLocale;
- (id)init;

@end
