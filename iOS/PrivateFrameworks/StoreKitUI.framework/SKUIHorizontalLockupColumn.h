//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupColumn : NSObject
{
    NSMutableArray *_childViewElements;
    long long _identifier;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *childViewElements; // @synthesize childViewElements=_childViewElements;
- (id)description;
- (void)_addChildViewElement:(id)arg1;
- (id)init;

@end
