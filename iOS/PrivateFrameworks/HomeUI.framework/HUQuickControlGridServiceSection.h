//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFServiceItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HUQuickControlGridServiceSection : NSObject
{
    HFServiceItem *_serviceItem;
    NSMutableArray *_gridControlItems;
    NSMutableArray *_supplementaryControlItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *supplementaryControlItems; // @synthesize supplementaryControlItems=_supplementaryControlItems;
@property(retain, nonatomic) NSMutableArray *gridControlItems; // @synthesize gridControlItems=_gridControlItems;
@property(retain, nonatomic) HFServiceItem *serviceItem; // @synthesize serviceItem=_serviceItem;
- (id)init;

@end

