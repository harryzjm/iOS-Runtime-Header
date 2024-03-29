//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSObject-Protocol.h>

@class TSPObject, TSPObjectUUIDMap;

@protocol TSPObjectUUIDMapDelegate <NSObject>
- (void)objectUUIDMap:(TSPObjectUUIDMap *)arg1 didUpdateWithObjectIdentifierAddedToDocument:(long long)arg2 objectIdentifierRemovedFromDocument:(long long)arg3;
- (TSPObject *)objectUUIDMap:(TSPObjectUUIDMap *)arg1 needsObjectForIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 onlyIfLoaded:(_Bool)arg4;
@end

