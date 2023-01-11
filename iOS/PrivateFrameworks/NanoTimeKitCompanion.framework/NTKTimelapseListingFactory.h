//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKDevice, NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject
{
    CLKDevice *_device;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)discardAssets;
- (void)setTimelapseListingHasAssets:(id)arg1;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)_initLibraryForDevice:(id)arg1;

@end
