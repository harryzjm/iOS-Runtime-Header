//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class VUIMediaEntityDownloadView;

@protocol VUIMediaEntityDownloadViewDelegate <NSObject>

@optional
- (void)downloadViewDidRequestCancelDownload:(VUIMediaEntityDownloadView *)arg1;
- (void)downloadViewDidRequestRemoveDownload:(VUIMediaEntityDownloadView *)arg1;
- (void)downloadViewDidRequestStartDownload:(VUIMediaEntityDownloadView *)arg1;
@end

