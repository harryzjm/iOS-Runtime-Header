//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimeZone;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject
{
    NSTimeZone *_previousTimeZone;
    NSTimeZone *_nextTimeZone;
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) NSTimeZone *nextTimeZone; // @synthesize nextTimeZone=_nextTimeZone;
@property(retain, nonatomic) NSTimeZone *previousTimeZone; // @synthesize previousTimeZone=_previousTimeZone;

@end
