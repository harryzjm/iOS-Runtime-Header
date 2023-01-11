//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDataCollectorState;
@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject
{
    id <HDDataCollector> _collector;
    HDDataCollectorState *_state;
}

@property(retain, nonatomic) HDDataCollectorState *state; // @synthesize state=_state;
@property(retain, nonatomic) id <HDDataCollector> collector; // @synthesize collector=_collector;
- (void).cxx_destruct;
- (id)description;

@end

