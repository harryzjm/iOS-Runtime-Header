//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AssetExplorer/PXReusableObject-Protocol.h>
#import <AssetExplorer/PXUIViewBasicTile-Protocol.h>

@class AEGridOverlayConfiguration, NSString;

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject>
{
    AEGridOverlayConfiguration *_overlayConfiguration;
}

+ (id)loopBadge;
+ (id)videoBadge;
+ (id)cloudBadge;
+ (id)gradientShadow;
+ (id)gridOverlayLayoutInfo;
@property(retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (struct CGRect)_loopRect;
- (struct CGRect)_videoRect;
- (struct CGRect)_cloudRect;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
