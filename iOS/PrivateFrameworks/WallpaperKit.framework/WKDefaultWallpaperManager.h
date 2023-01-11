//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, WKWallpaperBundle, WKWallpaperCollection, WKWallpaperCollectionsManager;

@interface WKDefaultWallpaperManager : NSObject
{
    NSDictionary *__defaultWallpaperLookup;
    WKWallpaperCollectionsManager *__collectionsManager;
    WKWallpaperCollection *__defaultWallpaperCollection;
    WKWallpaperBundle *__defaultWallpaperBundle;
}

+ (id)defaultWallpaperLookupURL;
+ (id)defaultWallpaperManager;
- (void).cxx_destruct;
@property(retain, nonatomic) WKWallpaperBundle *_defaultWallpaperBundle; // @synthesize _defaultWallpaperBundle=__defaultWallpaperBundle;
@property(retain, nonatomic) WKWallpaperCollection *_defaultWallpaperCollection; // @synthesize _defaultWallpaperCollection=__defaultWallpaperCollection;
@property(retain, nonatomic) WKWallpaperCollectionsManager *_collectionsManager; // @synthesize _collectionsManager=__collectionsManager;
@property(retain, nonatomic) NSDictionary *_defaultWallpaperLookup; // @synthesize _defaultWallpaperLookup=__defaultWallpaperLookup;
- (id)deviceEnclosureColor;
- (id)deviceColor;
- (id)deviceLogicalScreenClass;
- (id)deviceProductType;
- (id)defaultWallpaperCollection;
- (id)defaultWallpaperBundle;
- (void)_loadDefaultWallpaperInformation;
- (void)_loadDefaultWallpaperFile;
- (id)initWithCollectionsManager:(id)arg1;

@end
