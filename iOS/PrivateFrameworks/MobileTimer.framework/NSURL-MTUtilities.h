//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MTUtilities)
+ (id)mtURLForScheme:(id)arg1;
+ (id)mtURLForClockAppSection:(int)arg1 timerManager:(id)arg2;
+ (id)mtURLForClockAppSection:(int)arg1;
@property(readonly, nonatomic) NSString *mtID;
@property(readonly, nonatomic) _Bool mtIsForLastTimer;
@property(readonly, nonatomic) _Bool mtIsList;
@property(readonly, nonatomic) int mtClockAppSection;
@end

