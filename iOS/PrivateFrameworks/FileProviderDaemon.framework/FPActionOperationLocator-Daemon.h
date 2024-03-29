//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPActionOperationLocator.h>

@interface FPActionOperationLocator (Daemon)
- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;
- (id)startAccessingLocator;
@property(readonly, nonatomic) _Bool isDownloaded;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(_Bool)arg2 isCopy:(_Bool)arg3 extensionManager:(id)arg4;
- (_Bool)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;
- (id)materializedURLWithDomain:(id)arg1;
- (id)materializedURLWithExtensionManager:(id)arg1;
@end

