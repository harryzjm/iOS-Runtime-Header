//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUExportResult-Protocol.h>

@class NSString, NSURL, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUExportResult <NUExportResult>
{
    NSURL *_destinationURL;
    NUImageGeometry *_geometry;
}

@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
