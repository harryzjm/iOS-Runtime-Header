//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface MKURLSerializer : NSObject
{
}

+ (id)stringForDirectionsType:(unsigned long long)arg1;
+ (id)stringForMapType:(unsigned long long)arg1;
- (id)mapItemsFromUrl:(id)arg1 options:(id *)arg2;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;

@end

