//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class BSMutableSettings, NSSet, NSString;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding>
{
    BSMutableSettings *_settings;
    NSSet *_actions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *reason;
- (void)dealloc;
- (id)_initWithSettings:(id)arg1 actions:(id)arg2;
- (id)initWithActions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
