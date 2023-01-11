//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SUScriptCarrierBundlingController
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)updateLastKnownStatus:(id)arg1;
@property(readonly) NSString *statusUnlinked;
@property(readonly) NSString *statusUnknown;
@property(readonly) NSString *statusNotEligible;
@property(readonly) NSString *statusNeedsManualVerification;
@property(readonly) NSString *statusEligible;
@property(readonly) NSString *provisioningStyleOnce;
@property(readonly) NSString *provisioningStyleNever;
@property(readonly) NSString *provisioningStyleAlways;
- (id)_className;

@end

