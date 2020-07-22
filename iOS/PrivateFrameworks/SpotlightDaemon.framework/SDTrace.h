//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SDTraceItem;

@interface SDTrace : NSObject
{
    SDTraceItem *_items[32];
    int _current;
    NSString *_title;
}

+ (void)initialize;
@property(readonly, nonatomic) int current; // @synthesize current=_current;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)items;
- (long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end
