//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PHImageRequestOptions;
@protocol PXDisplayAsset;

@protocol PXUIImageProvider <NSObject>
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id <PXDisplayAsset>)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4 resultHandler:(void (^)(UIImage *, NSDictionary *))arg5;
@end

