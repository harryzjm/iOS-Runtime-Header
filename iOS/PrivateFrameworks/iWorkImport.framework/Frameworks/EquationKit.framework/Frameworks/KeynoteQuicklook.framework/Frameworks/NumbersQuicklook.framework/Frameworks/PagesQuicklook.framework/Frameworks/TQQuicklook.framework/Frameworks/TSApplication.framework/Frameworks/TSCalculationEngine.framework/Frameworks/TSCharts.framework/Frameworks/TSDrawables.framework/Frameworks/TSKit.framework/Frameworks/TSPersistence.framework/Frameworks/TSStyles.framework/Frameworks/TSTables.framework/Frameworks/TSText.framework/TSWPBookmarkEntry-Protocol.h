//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol TSWPBookmarkEntry <NSObject>
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) NSString *displayName;
@end

