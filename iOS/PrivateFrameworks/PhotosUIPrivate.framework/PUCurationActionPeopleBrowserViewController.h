//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPeopleDetailSettingsViewController.h>

@class NSMutableDictionary, PUCurationActionAssetBrowserViewController, PUCurationTraitContainer;

__attribute__((visibility("hidden")))
@interface PUCurationActionPeopleBrowserViewController : PXPeopleDetailSettingsViewController
{
    PUCurationTraitContainer *_traitContainer;
    PUCurationActionAssetBrowserViewController *_assetBrowserViewController;
    NSMutableDictionary *_facesByPersonLocalIdentifier;
    NSMutableDictionary *_detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier; // @synthesize detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier=_detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier; // @synthesize facesByPersonLocalIdentifier=_facesByPersonLocalIdentifier;
@property(retain, nonatomic) PUCurationActionAssetBrowserViewController *assetBrowserViewController; // @synthesize assetBrowserViewController=_assetBrowserViewController;
@property(retain, nonatomic) PUCurationTraitContainer *traitContainer; // @synthesize traitContainer=_traitContainer;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithTraitContainer:(id)arg1;

@end

