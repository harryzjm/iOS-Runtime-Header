//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject
{
    _Bool _animated;
    unsigned long long _gadgetType;
    NSString *_gadgetId;
    id <PXGadget> _gadget;
    long long _navigationType;
    CDUnknownBlockType _navigationBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, copy, nonatomic) CDUnknownBlockType navigationBlock; // @synthesize navigationBlock=_navigationBlock;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) id <PXGadget> gadget; // @synthesize gadget=_gadget;
@property(readonly, nonatomic) NSString *gadgetId; // @synthesize gadgetId=_gadgetId;
@property(readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
- (id)initWithGadget:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (id)initWithGadgetId:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;
- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;

@end
