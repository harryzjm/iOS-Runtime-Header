//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMStorageDomainEventDispatcher.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher (IKJSDependency)
- (void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)safe_domStorageItemsClearedWithStorageId:(id)arg1;
@end

