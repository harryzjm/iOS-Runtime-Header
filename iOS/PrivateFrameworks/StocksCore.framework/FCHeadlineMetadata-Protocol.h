//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCHeadlineMetadata <NSObject>
@property(nonatomic, readonly) NSString *storyType;
@property(nonatomic, readonly) NSDate *displayDate;

@optional
@property(nonatomic, readonly) NSString *shortExcerpt;
@property(nonatomic, readonly) NSString *title;
@end

