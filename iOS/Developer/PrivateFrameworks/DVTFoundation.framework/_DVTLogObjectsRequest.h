//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface _DVTLogObjectsRequest : NSObject
{
    NSPointerArray *_remainingObjects;
    double _initialRequestTimeInterval;
    double _lastRequestTimeInterval;
}

- (void).cxx_destruct;
@property double lastRequestTimeInterval; // @synthesize lastRequestTimeInterval=_lastRequestTimeInterval;
@property double initialRequestTimeInterval; // @synthesize initialRequestTimeInterval=_initialRequestTimeInterval;
@property(retain) NSPointerArray *remainingObjects; // @synthesize remainingObjects=_remainingObjects;

@end

