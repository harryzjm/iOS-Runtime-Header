//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest
{
    GEOPhotoInfo *_info;
    CDUnknownBlockType _imageHandler;
}

+ (id)requestWithMapItem:(id)arg1 info:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType imageHandler; // @synthesize imageHandler=_imageHandler;
@property(retain) GEOPhotoInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;
- (id)url;

@end

