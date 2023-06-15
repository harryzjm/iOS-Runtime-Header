//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCTodayReadHistoryItem <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSDate *lastVisitedAt;
@property(readonly, nonatomic) long long maxVersionRead;
@property(readonly, copy, nonatomic) NSString *articleID;
@end

