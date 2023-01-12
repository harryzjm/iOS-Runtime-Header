//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSApplicationIdentifierMapping-Protocol.h>

@class NSString;

@interface DNDSApplicationIdentifierMapper : NSObject <DNDSApplicationIdentifierMapping>
{
}

- (id)_macOSBundleIDForiOSBundleID:(id)arg1;
- (id)_iOSBundleIDForMacOSBundleID:(id)arg1;
- (id)applicationIdentifierForSyncWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForFileWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForTargetPlatform:(unsigned long long)arg1 withSourceApplicationIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
