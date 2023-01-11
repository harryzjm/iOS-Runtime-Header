//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer
{
    NSString *_userResponse;
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userResponse; // @synthesize userResponse=_userResponse;
- (void)applyBlacklistFeatureWithActionType:(id)arg1;
- (void)performBackgroundTask;
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;
- (void)performUserInteractionTask;
- (void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2;

@end
