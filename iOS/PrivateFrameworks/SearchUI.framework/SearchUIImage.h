//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUIImage : SFImage
{
    _Bool _useFastPathShadow;
    _Bool _needsTinting;
    UIImage *_uiImage;
    SFImage *_sfImage;
}

+ (id)templatifiedImage:(id)arg1;
+ (id)imageFromData:(id)arg1;
+ (id)cachedImageFromSFImage:(id)arg1;
+ (id)imageWithSFImage:(id)arg1;
@property _Bool needsTinting; // @synthesize needsTinting=_needsTinting;
@property _Bool useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(retain) SFImage *sfImage; // @synthesize sfImage=_sfImage;
@property(retain) UIImage *uiImage; // @synthesize uiImage=_uiImage;
- (void).cxx_destruct;
- (_Bool)isTemplate;
- (_Bool)shouldCropToCircle;
- (double)cornerRadius;
- (struct CGSize)size;
- (id)loadImage;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithSFImage:(id)arg1;

@end

