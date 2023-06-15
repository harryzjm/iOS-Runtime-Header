//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

__attribute__((visibility("hidden")))
@interface HMDShortcutAction
{
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (Class)modelClass;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;
- (id)associatedAccessories;
- (_Bool)isStaleWithAccessory:(id)arg1;
- (_Bool)isCompatibleWithAction:(id)arg1;
- (_Bool)isAssociatedWithAccessory:(id)arg1;
- (unsigned long long)entitlementsForNotification;
- (_Bool)isUnsecuringAction;
- (_Bool)requiresDeviceUnlock;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)stateDump;
- (id)dictionaryRepresentation;
- (unsigned long long)type;
- (void)dealloc;
- (id)removeShortcut;
- (id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3;

@end

