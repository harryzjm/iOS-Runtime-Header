//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PUBrowsingSessionImageWellThumbnailProvider
- (void)cancelThumbnailRequest:(long long)arg1;
- (long long)requestImageForStartingAssetFillingTargetSize:(struct CGSize)arg1 resultHandler:(void (^)(UIImage *, NSError *, long long))arg2;
@end

