//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject
{
    _Bool _showBolt;
    _Bool _reverseLayoutDirection;
    UIImage *_cachedImage;
    UIColor *_fillColor;
    double _capacity;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool reverseLayoutDirection; // @synthesize reverseLayoutDirection=_reverseLayoutDirection;
@property(nonatomic) _Bool showBolt; // @synthesize showBolt=_showBolt;
@property(nonatomic) double capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (void).cxx_destruct;
- (_Bool)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 showingBolt:(_Bool)arg3 reverseLayout:(_Bool)arg4 scale:(double)arg5;

@end
