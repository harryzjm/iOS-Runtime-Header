//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPConnectionsStore : NSObject
{
}

- (_Bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id *)arg6 block:(CDUnknownBlockType)arg7;
- (_Bool)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

