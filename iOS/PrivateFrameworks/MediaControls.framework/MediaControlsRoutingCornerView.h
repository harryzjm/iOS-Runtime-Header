//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

@interface MediaControlsRoutingCornerView : CCUICAPackageView
{
    _Bool _routesAvailable;
    _Bool _routing;
    _Bool _shouldPauseAnimations;
}

@property(nonatomic) _Bool shouldPauseAnimations; // @synthesize shouldPauseAnimations=_shouldPauseAnimations;
@property(nonatomic, getter=isRouting) _Bool routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) _Bool routesAvailable; // @synthesize routesAvailable=_routesAvailable;
- (void)_updateGlyph;
- (id)initWithFrame:(struct CGRect)arg1;

@end

