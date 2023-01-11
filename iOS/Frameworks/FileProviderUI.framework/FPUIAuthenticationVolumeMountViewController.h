//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController
{
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}

- (void).cxx_destruct;
- (_Bool)_canMoveToNextStep;
- (void)selectedVolumesIndexesDidChange;
- (id)tableCellCheckmarkImageDisabled;
- (void)setupTableViewSections;
- (void)_done:(id)arg1;
- (void)viewDidLoad;
- (id)defaultRightBarButtonItem;
- (id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2;

@end
