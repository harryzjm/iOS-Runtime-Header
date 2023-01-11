//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitySortIndex : NSObject
{
    NSString *_title;
    unsigned long long _startIndex;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

