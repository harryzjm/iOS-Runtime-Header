//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EKAutocompleteSearch : NSObject
{
    unsigned long long _maximumResultCount;
}

+ (id)searchWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 ignoreScheduledEvents:(_Bool)arg4 initialEvent:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property unsigned long long maximumResultCount; // @synthesize maximumResultCount=_maximumResultCount;

@end
