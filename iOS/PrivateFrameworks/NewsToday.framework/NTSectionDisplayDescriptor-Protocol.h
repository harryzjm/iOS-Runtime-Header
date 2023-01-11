//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsToday/NSCopying-Protocol.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;

@protocol NTSectionDisplayDescriptor <NSCopying>
@property(readonly, nonatomic) _Bool videoPlaysMutedByDefault;
@property(readonly, copy, nonatomic) NSString *backgroundGradientColor;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property(readonly, nonatomic) _Bool useNameColorInWidget;
@property(readonly, nonatomic) _Bool displaysAsVideoPlaylist;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSString *actionTitle;
@property(readonly, copy, nonatomic) NSString *nameColor;
@property(readonly, copy, nonatomic) NSString *name;
@end

