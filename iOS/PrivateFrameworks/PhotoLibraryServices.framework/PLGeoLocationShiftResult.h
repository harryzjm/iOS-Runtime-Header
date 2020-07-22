//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PLGeoLocationShiftResult : NSObject
{
    NSMutableDictionary *_shiftedLocations;
    NSArray *_shiftedAssetIDs;
    _Bool _encounteredErrors;
}

@property(nonatomic, setter=_setEncounteredErrors:) _Bool encounteredErrors; // @synthesize encounteredErrors=_encounteredErrors;
- (void)_setCoordinate:(CDStruct_c3b9c2ee)arg1 ForAssetID:(id)arg2;
- (struct CLLocationCoordinate2D)shiftedLocationForAssetID:(id)arg1;
- (_Bool)hasShiftedLocationForAssetID:(id)arg1;
@property(readonly, nonatomic) NSArray *assetIDs;
- (void)dealloc;
- (id)initWithAssetIDs:(id)arg1;

@end

