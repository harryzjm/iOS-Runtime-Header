//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INRelativeSettingResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithRelativeSettingToConfirm:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;
+ (id)successWithResolvedRelativeSetting:(long long)arg1;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
