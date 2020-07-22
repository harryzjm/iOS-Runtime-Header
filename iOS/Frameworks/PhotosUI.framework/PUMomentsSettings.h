//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMomentsSettings : PXSettings
{
    _Bool _allowCollectionInfluence;
    unsigned long long _order;
}

+ (void)_rebuildMoments;
+ (void)_renameCollection;
+ (void)_renameMoment;
+ (void)_tagSelectionForCollections;
+ (void)_mergeMoments;
+ (void)_splitMomentsWithBoth:(_Bool)arg1;
+ (void)_clearSelection;
+ (id)_currentlySelectedAssets;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool allowCollectionInfluence; // @synthesize allowCollectionInfluence=_allowCollectionInfluence;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
- (void)setDefaultValues;
- (void)performPostSaveActions;
- (id)parentSettings;

@end
