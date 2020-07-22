//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSArray, NSData, NSError;

@protocol NSFileProviderChangeObserver <NSObject>
- (void)finishEnumeratingWithError:(NSError *)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(NSData *)arg1 moreComing:(_Bool)arg2;
- (void)didDeleteItemsWithIdentifiers:(NSArray *)arg1;
- (void)didUpdateItems:(NSArray *)arg1;
@end
