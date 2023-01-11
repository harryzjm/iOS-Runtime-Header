//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSImage, QLThumbnailMetadata, UIImage;

@interface QLThumbnailRepresentation : NSObject
{
    int _flavor;
    long long _type;
    NSImage *_NSImage;
    UIImage *_UIImageThumbnail;
    struct CGImage *_CGImageThumbnail;
    double _scale;
    QLThumbnailMetadata *_generatedProperties;
    struct CGRect _contentRect;
}

@property(retain) QLThumbnailMetadata *generatedProperties; // @synthesize generatedProperties=_generatedProperties;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property int flavor; // @synthesize flavor=_flavor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGImage *CGImageThumbnail; // @synthesize CGImageThumbnail=_CGImageThumbnail;
@property(retain, nonatomic) UIImage *UIImageThumbnail; // @synthesize UIImageThumbnail=_UIImageThumbnail;
@property(readonly, nonatomic) NSImage *NSImage; // @synthesize NSImage=_NSImage;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIImage *UIImage; // @dynamic UIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)initWithThumbnailType:(long long)arg1 iconFlavor:(int)arg2 CGImage:(struct CGImage *)arg3 scale:(double)arg4 contentRect:(struct CGRect)arg5 generatedProperties:(id)arg6;

@end
