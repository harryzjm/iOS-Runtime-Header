//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject
{
    _Bool _animated;
    _UIStatusBarDataEntry *_entry;
}

+ (id)updateWithEntry:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) _UIStatusBarDataEntry *entry; // @synthesize entry=_entry;

@end
