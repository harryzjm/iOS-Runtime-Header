//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject
{
    id <PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)key;
- (id)geotaggable;
- (id)initWithGeotaggable:(id)arg1 andKey:(id)arg2;

@end

