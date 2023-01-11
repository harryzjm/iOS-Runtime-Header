//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemStorage;
@protocol GEOMapItem, NSObject;

__attribute__((visibility("hidden")))
@interface _GEOMapItemStorageNotificationTrampoline : NSObject
{
    id <GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id <NSObject> _notificationToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1 mapItemStorage:(id)arg2;

@end
