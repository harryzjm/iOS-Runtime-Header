//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <MapKit/MKUserLocationHeadingIndicator-Protocol.h>

@class MKUserLocationView, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingConeLayer : CALayer <MKUserLocationHeadingIndicator>
{
    MKUserLocationView *_userLocationView;
    CALayer *_maskLayer;
}

- (void).cxx_destruct;
- (id)_headingImage:(struct CGPoint *)arg1;
- (void)_updateHeadingImage;
- (void)updateTintColor:(id)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateHeading:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
