//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSNumber, NSString, NSURL, NSUUID, PKEnumerator;
@protocol PKApplicationProxy, PKApplicationWorkspaceProxy, PKExtensionPointProxy, PKPlugInProxy, PKPlugInRecordProxy;

@protocol PKProxyFactory <NSObject>
@property(readonly) _Bool hasLSDatabaseAccess;
- (PKEnumerator *)plugInRecordEnumeratorWithExtensionPointName:(NSString *)arg1 platform:(unsigned int)arg2;
- (PKEnumerator *)plugInRecordEnumerator;
- (id <PKPlugInRecordProxy>)plugInRecordForIdentifier:(NSString *)arg1;
- (id <PKPlugInRecordProxy>)plugInRecordForUUID:(NSUUID *)arg1;
- (id <PKExtensionPointProxy>)extensionPointForIdentifier:(NSString *)arg1 platform:(NSNumber *)arg2;
- (id <PKPlugInProxy>)plugInKitProxyForUUID:(NSUUID *)arg1;
- (id <PKPlugInProxy>)plugInKitProxyForURL:(NSURL *)arg1;
- (id <PKApplicationWorkspaceProxy>)defaultApplicationWorkspace;
- (id <PKApplicationProxy>)applicationProxyForBundleURL:(NSURL *)arg1;
@end

