//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MSPSharedTripSubscriptionToken : NSObject
{
    NSString *_sharedTripIdentifier;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSharedTripIdentifier:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end

