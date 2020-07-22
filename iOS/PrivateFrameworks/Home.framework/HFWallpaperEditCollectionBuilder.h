//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFWallpaperEditCollection, NAFuture;
@protocol HFHomeKitObject><HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject
{
    _Bool _hkObjectNewlyCreated;
    id <HFHomeKitObject><HMApplicationData> _hkObject;
    long long _namedWallpaperCollectionType;
    NAFuture *_initialEditCollectionFuture;
    HFWallpaperEditCollection *_updatedEditCollection;
}

@property(retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection; // @synthesize updatedEditCollection=_updatedEditCollection;
@property(retain, nonatomic) NAFuture *initialEditCollectionFuture; // @synthesize initialEditCollectionFuture=_initialEditCollectionFuture;
@property(nonatomic) _Bool hkObjectNewlyCreated; // @synthesize hkObjectNewlyCreated=_hkObjectNewlyCreated;
@property(nonatomic) long long namedWallpaperCollectionType; // @synthesize namedWallpaperCollectionType=_namedWallpaperCollectionType;
@property(retain, nonatomic) id <HFHomeKitObject><HMApplicationData> hkObject; // @synthesize hkObject=_hkObject;
- (void).cxx_destruct;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)commitWallpaper;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)wallpaperEditCollectionFuture;
- (id)description;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;

@end

