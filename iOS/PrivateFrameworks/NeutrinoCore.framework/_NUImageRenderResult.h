//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUImageRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NURenderStatistics;

@interface _NUImageRenderResult <NUImageRenderResult>
{
    NURegion *_region;
    NUImageGeometry *_geometry;
}

- (void).cxx_destruct;
@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain) NURegion *region; // @synthesize region=_region;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
