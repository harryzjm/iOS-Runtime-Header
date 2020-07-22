//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderMonitor : NSObject
{
    id _providerMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    CDUnknownBlockType _monitorCallback;
}

- (void).cxx_destruct;
- (void)notifyIfNecessary;
- (void)monitorProviderNamesForIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

