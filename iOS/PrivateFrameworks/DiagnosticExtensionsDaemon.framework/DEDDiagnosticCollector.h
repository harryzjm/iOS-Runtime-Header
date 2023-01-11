//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject
{
    unsigned long long _collectionTimeout;
    NSObject<OS_os_log> *_log;
    NSArray *_cachedExtensions;
}

- (void).cxx_destruct;
@property(retain) NSArray *cachedExtensions; // @synthesize cachedExtensions=_cachedExtensions;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property unsigned long long collectionTimeout; // @synthesize collectionTimeout=_collectionTimeout;
- (id)extensionManager;
- (id)availableDiagnosticExtensions;
- (id)extensionForIdentifier:(id)arg1;
- (_Bool)isDiagnosticExtensionAvailable;
- (void)cleanupItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)prepareItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)prepareItemsWithDeferredExtensionInfo:(id)arg1;
- (id)collectItemsWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)init;

@end
