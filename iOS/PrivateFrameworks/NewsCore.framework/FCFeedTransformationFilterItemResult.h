//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCFeedTransformationFilterItemResult : NSObject
{
    _Bool _filtered;
    id _item;
    long long _filteredReasons;
}

- (void).cxx_destruct;
@property(nonatomic) long long filteredReasons; // @synthesize filteredReasons=_filteredReasons;
@property(nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 filtered:(_Bool)arg2 filteredReasons:(long long)arg3;

@end
