//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, NSArray, NSString;

@interface GEOPlacePhotoLookupResult : NSObject
{
    struct _NSRange _originalRange;
    NSArray *_photos;
    GEOMapItemIdentifier *_mapItemIdentifier;
    NSString *_vendorIdentifier;
    unsigned long long _totalPhotoCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long totalPhotoCount; // @synthesize totalPhotoCount=_totalPhotoCount;
@property(readonly, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier; // @synthesize mapItemIdentifier=_mapItemIdentifier;
@property(readonly, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(readonly, nonatomic) long long nextStartIndex;
- (id)initWithVendorIdentifier:(id)arg1 place:(id)arg2 mapItemItemIdentifier:(id)arg3 originalRange:(struct _NSRange)arg4;

@end
