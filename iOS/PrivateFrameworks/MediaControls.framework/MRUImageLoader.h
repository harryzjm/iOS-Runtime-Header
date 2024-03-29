//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, UIView;
@protocol MPArtworkDataSourceVisualIdenticality;

__attribute__((visibility("hidden")))
@interface MRUImageLoader : NSObject
{
    _Bool _cacheImages;
    _Bool _formatImages;
    UIView *_destination;
    CDUnknownBlockType _imageHandler;
    MPArtworkCatalog *_catalog;
    id <MPArtworkDataSourceVisualIdenticality> _lastLoadedArtworkIdentifier;
    id <MPArtworkDataSourceVisualIdenticality> _lastFailedArtworkIdentifier;
    long long _failedLoadingCount;
    double _scale;
    long long _state;
    struct CGSize _effectiveScaledFittingSizeForConfiguration;
    struct CGSize _lastVendedScaledFittingSize;
    struct CGSize _fittingSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic) long long failedLoadingCount; // @synthesize failedLoadingCount=_failedLoadingCount;
@property(retain, nonatomic) id <MPArtworkDataSourceVisualIdenticality> lastFailedArtworkIdentifier; // @synthesize lastFailedArtworkIdentifier=_lastFailedArtworkIdentifier;
@property(nonatomic) struct CGSize lastVendedScaledFittingSize; // @synthesize lastVendedScaledFittingSize=_lastVendedScaledFittingSize;
@property(nonatomic) struct CGSize effectiveScaledFittingSizeForConfiguration; // @synthesize effectiveScaledFittingSizeForConfiguration=_effectiveScaledFittingSizeForConfiguration;
@property(retain, nonatomic) id <MPArtworkDataSourceVisualIdenticality> lastLoadedArtworkIdentifier; // @synthesize lastLoadedArtworkIdentifier=_lastLoadedArtworkIdentifier;
@property(retain, nonatomic) MPArtworkCatalog *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) _Bool formatImages; // @synthesize formatImages=_formatImages;
@property(nonatomic) _Bool cacheImages; // @synthesize cacheImages=_cacheImages;
@property(readonly, nonatomic) CDUnknownBlockType imageHandler; // @synthesize imageHandler=_imageHandler;
@property(readonly, nonatomic) __weak UIView *destination; // @synthesize destination=_destination;
- (void)configureCatalog;
- (struct CGSize)scaledFittingSize;
- (_Bool)vendCachedImageIfPossible;
- (void)updateFittingSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)updateCatalog:(id)arg1;
- (_Bool)wouldLoadNewImageForCatalog:(id)arg1;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 imageHandler:(CDUnknownBlockType)arg2;

@end

