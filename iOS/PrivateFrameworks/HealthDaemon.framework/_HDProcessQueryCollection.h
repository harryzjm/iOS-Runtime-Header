//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface _HDProcessQueryCollection : NSObject
{
    NSMutableDictionary *_queryServersByUUID;
    _Bool _processSuspended;
    NSString *_processBundleIdentifier;
}

@property(nonatomic, getter=isProcessSuspended) _Bool processSuspended; // @synthesize processSuspended=_processSuspended;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
- (void).cxx_destruct;
- (void)removeQueryServer:(id)arg1;
- (void)addQueryServer:(id)arg1;
@property(readonly, nonatomic) _Bool hasQueryServers;
@property(readonly, copy, nonatomic) NSArray *queryServers;
- (id)initWithProcessBundleIdentifier:(id)arg1;

@end
