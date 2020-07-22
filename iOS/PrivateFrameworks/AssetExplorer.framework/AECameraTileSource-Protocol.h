//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class UIViewController;
@protocol PXUIViewBasicTile;

@protocol AECameraTileSource <NSObject>
@property(readonly, nonatomic) UIViewController *cameraParentViewController;
- (void)ensureSubviewForTile:(id <PXUIViewBasicTile>)arg1;
- (void)applyExistingGeometryForTile:(id <PXUIViewBasicTile>)arg1;
@end
