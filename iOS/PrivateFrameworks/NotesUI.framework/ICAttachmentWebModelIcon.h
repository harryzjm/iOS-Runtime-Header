//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject
{
    _Bool _scaleImageToIconSize;
    NSURL *_url;
    double _scale;
    struct UIImage *_image;
    struct CGSize _size;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool scaleImageToIconSize; // @synthesize scaleImageToIconSize=_scaleImageToIconSize;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFallbackURL:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(struct CGSize)arg2;

@end
