//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _DKEventQuery;

@interface _DKAggregateEventQueryResult : NSObject
{
    _DKEventQuery *_query;
    NSMutableArray *_mutableEvents;
    NSMutableArray *_mutableErrors;
    unsigned long long _numberOfContributions;
}

- (void).cxx_destruct;

@end
