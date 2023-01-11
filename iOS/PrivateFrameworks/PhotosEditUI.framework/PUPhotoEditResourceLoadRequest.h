//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/NSCopying-Protocol.h>

@protocol PUPhotoEditResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying>
{
    _Bool _requireLocalResources;
    _Bool _requireAdjustments;
    _Bool _assetLoadingAsRaw;
    id <PUPhotoEditResourceLoaderDelegate> _delegate;
    long long _version;
    long long __resolvedVersion;
    struct CGSize _targetSize;
}

@property(nonatomic) _Bool assetLoadingAsRaw; // @synthesize assetLoadingAsRaw=_assetLoadingAsRaw;
@property(nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion; // @synthesize _resolvedVersion=__resolvedVersion;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) __weak id <PUPhotoEditResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requireAdjustments; // @synthesize requireAdjustments=_requireAdjustments;
@property(nonatomic) _Bool requireLocalResources; // @synthesize requireLocalResources=_requireLocalResources;
- (void).cxx_destruct;
- (id)_videoRequestOptionsWithAsset:(id)arg1;
- (id)_imageRequestOptionsWithAsset:(id)arg1;
- (id)_adjustmentsRequestOptions;
- (long long)_videoRequestVersion;
- (long long)_imageRequestVersionWithAsset:(id)arg1;
- (void)_assertWorkVersionResolved;
- (_Bool)_isWorkVersionResolved;
- (void)_resolveVersionIfNeededWithAdjustmentsResult:(id)arg1;
- (_Bool)_needsLoadAdjustments;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

