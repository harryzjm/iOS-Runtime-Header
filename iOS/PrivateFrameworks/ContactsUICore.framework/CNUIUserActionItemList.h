//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface CNUIUserActionItemList : NSObject
{
    NSString *_type;
    UIImage *_icon;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3;

@end
