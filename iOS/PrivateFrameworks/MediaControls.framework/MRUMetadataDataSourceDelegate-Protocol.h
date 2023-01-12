//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUArtwork, MRUNowPlayingInfo, MRUTimeControls, MRUTransportControls, NSString;
@protocol MRUMetadataDataSource;

@protocol MRUMetadataDataSourceDelegate <NSObject>

@optional
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeTransportControls:(MRUTransportControls *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeTimeControls:(MRUTimeControls *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeNowPlayingInfo:(MRUNowPlayingInfo *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeArtwork:(MRUArtwork *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeBundleID:(NSString *)arg2;
@end

