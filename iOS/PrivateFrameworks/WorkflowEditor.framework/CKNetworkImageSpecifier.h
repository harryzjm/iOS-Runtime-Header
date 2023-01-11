//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;
@protocol CKNetworkImageDownloading;

@interface CKNetworkImageSpecifier : NSObject
{
    NSURL *_url;
    UIImage *_defaultImage;
    id <CKNetworkImageDownloading> _imageDownloader;
    id _scenePath;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) id scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) id <CKNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 defaultImage:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 cropRect:(struct CGRect)arg5;

@end
