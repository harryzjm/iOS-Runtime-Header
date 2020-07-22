//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@class VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding>
{
    struct CGImage *_image;
    unsigned long long _width;
    unsigned long long _height;
    double _scale;
    VKCamera *_camera;
    _Bool _showingNoDataPlaceholders;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isShowingNoDataPlaceholders) _Bool showingNoDataPlaceholders; // @synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (_Bool)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImage:(struct CGImage *)arg1 scale:(double)arg2 camera:(id)arg3 showingNoDataPlaceholders:(_Bool)arg4;

@end
