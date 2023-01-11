//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying>
{
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;
    unsigned long long _cachedSizeEstimate;
    NSString *_localizedDescription;
    struct CGSize _targetSize;
}

+ (id)orderedDefaultDescriptors;
+ (id)defaultActualSizeDescriptor;
+ (id)defaultSmallDescriptor;
+ (id)defaultMediumDescriptor;
+ (id)defaultLargeDescriptor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)appliesToAsset:(id)arg1;
- (unsigned long long)estimatedSizeForAssets:(id)arg1;
- (id)formattedSizeForAssets:(id)arg1;
- (id)localizedDescriptionForAssets:(id)arg1;
- (id)initWithLocalizedDescription:(id)arg1 targetSize:(struct CGSize)arg2;

@end
