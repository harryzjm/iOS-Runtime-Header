//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject
{
    _Bool _animated;
    HFItem *_item;
}

@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 animated:(_Bool)arg2;

@end
