//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject
{
    NSMutableDictionary *_children;
    long long _childCount;
}

@property(nonatomic) long long childCount; // @synthesize childCount=_childCount;
@property(readonly, nonatomic) NSMutableDictionary *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

