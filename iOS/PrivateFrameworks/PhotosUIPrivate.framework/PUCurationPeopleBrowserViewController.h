//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPeopleDetailSettingsViewController.h>

@class NSMutableDictionary, PNScoreConfiguration, PUCurationAssetBrowserViewController;

__attribute__((visibility("hidden")))
@interface PUCurationPeopleBrowserViewController : PXPeopleDetailSettingsViewController
{
    PNScoreConfiguration *_scoreConfiguration;
    PUCurationAssetBrowserViewController *_assetBrowserViewController;
    NSMutableDictionary *_facesByPersonLocalIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier; // @synthesize facesByPersonLocalIdentifier=_facesByPersonLocalIdentifier;
@property(retain, nonatomic) PUCurationAssetBrowserViewController *assetBrowserViewController; // @synthesize assetBrowserViewController=_assetBrowserViewController;
@property(retain, nonatomic) PNScoreConfiguration *scoreConfiguration; // @synthesize scoreConfiguration=_scoreConfiguration;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithScoreConfiguration:(id)arg1;

@end

