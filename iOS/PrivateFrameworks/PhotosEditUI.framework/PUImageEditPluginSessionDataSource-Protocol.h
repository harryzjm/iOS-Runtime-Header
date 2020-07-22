//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosEditUI/PUEditPluginSessionDataSource-Protocol.h>

@class PUEditPluginSession;

@protocol PUImageEditPluginSessionDataSource <PUEditPluginSessionDataSource>
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadVideoComplementURLWithHandler:(void (^)(NSURL *, struct))arg2;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadFullSizeImageWithHandler:(void (^)(NSURL *, long long, NSString *))arg2;
- (void)editPluginSession:(PUEditPluginSession *)arg1 loadDisplaySizeImageWithHandler:(void (^)(UIImage *))arg2;
@end
