//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface ICThumbnailData : NSObject
{
    _Bool _showAsFileIcon;
    _Bool _isMovie;
    UIImage *_image;
    unsigned long long _imageScaling;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMovie; // @synthesize isMovie=_isMovie;
@property(nonatomic) _Bool showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 imageScaling:(unsigned long long)arg2 showAsFileIcon:(_Bool)arg3 isMovie:(_Bool)arg4;

@end
