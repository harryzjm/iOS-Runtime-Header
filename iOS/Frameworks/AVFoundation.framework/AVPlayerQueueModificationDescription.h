//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject
{
    long long _modificationType;
    AVPlayerItem *_item;
    AVPlayerItem *_afterItem;
}

+ (id)modificationForRemovingItem:(id)arg1;
+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
@property(readonly, nonatomic) AVPlayerItem *afterItem; // @synthesize afterItem=_afterItem;
@property(readonly, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long modificationType; // @synthesize modificationType=_modificationType;
- (void)dealloc;
- (id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3;
- (id)init;

@end

