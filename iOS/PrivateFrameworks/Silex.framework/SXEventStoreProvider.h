//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore;

@interface SXEventStoreProvider : NSObject
{
    EKEventStore *_eventStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;

@end
