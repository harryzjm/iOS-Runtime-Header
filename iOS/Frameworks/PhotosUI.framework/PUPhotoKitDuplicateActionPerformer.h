//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDuplicateActionPerformer
{
    PUDuplicateActionController *_duplicateActionController;
    long long _action;
    CDStruct_1b6d18a9 _newStillImageTime;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) CDStruct_1b6d18a9 newStillImageTime; // @synthesize newStillImageTime=_newStillImageTime;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) PUDuplicateActionController *duplicateActionController; // @synthesize duplicateActionController=_duplicateActionController;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end

