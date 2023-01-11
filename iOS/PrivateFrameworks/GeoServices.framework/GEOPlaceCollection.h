//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, GEOPDAttribution, GEOPDPlaceCollection, NSData, NSString;

@interface GEOPlaceCollection : NSObject
{
    GEOPDPlaceCollection *_collection;
    GEOPDAttribution *_dataAttribution;
    GEOMapItemAttribution *_attribution;
}

+ (id)placeCollectionForData:(id)arg1;
- (void).cxx_destruct;
- (id)imageURLforSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned long long placeCount;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *actionURLString;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSData *storageData;
- (void)loadAttribution;
- (id)initWithCollection:(id)arg1 attribution:(id)arg2;

@end
