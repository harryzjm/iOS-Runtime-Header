//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAction;

@interface HFActionBuilder
{
}

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
- (id)createNewAction;
- (id)copyForCreatingNewAction;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (void)setAction:(id)arg1;
@property(readonly, nonatomic) HMAction *action;

@end
