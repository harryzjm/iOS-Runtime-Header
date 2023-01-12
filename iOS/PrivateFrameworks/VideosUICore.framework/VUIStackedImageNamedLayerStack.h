//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIStackedImageNamedLayerStack : NSObject
{
    struct CGImage *_flattenedImage;
    _Bool _flatImageContainsCornerRadius;
    NSString *_name;
    NSArray *_layers;
    double _scale;
    id _radiosityImage;
    struct CGSize _size;
    struct CGSize _radiosityImageScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool flatImageContainsCornerRadius; // @synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius;
@property(nonatomic) struct CGSize radiosityImageScale; // @synthesize radiosityImageScale=_radiosityImageScale;
@property(retain, nonatomic) id radiosityImage; // @synthesize radiosityImage=_radiosityImage;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGImage *flattenedImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

