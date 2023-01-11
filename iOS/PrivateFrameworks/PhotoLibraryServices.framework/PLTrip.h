//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLTrip : NSObject
{
    unsigned long long _type;
    NSArray *_items;
}

@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)description;
- (id)initWithItems:(id)arg1 type:(unsigned long long)arg2;

@end
