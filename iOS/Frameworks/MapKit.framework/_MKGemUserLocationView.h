//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface _MKGemUserLocationView
{
    CALayer *_gemLayer;
}

- (void).cxx_destruct;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_updateLayers;
- (id)staleImage;
- (id)normalImage;
- (id)_baseLayer;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_setupLayers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
