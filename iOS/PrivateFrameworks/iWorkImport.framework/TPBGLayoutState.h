//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TPBGLayoutState : NSObject
{
    _Bool _active;
    NSDate *_startDate;
    long long _suspendCount;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end

