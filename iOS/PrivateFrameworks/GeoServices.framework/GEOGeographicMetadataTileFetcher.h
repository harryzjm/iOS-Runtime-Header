//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, NSArray, NSMapTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOGeographicMetadataTileFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    unsigned short _mcc;
    unsigned short _mnc;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
    NSMapTable *_resultItems;
}

- (void).cxx_destruct;
- (void)fetchMetadataWithResponseQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)reportCorrupt:(id)arg1;
- (id)initForTileStyle:(int)arg1 mcc:(unsigned short)arg2 mnc:(unsigned short)arg3 location:(id)arg4 options:(unsigned long long)arg5;
- (id)initForTileStyle:(int)arg1 location:(id)arg2 options:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

