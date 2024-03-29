//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RadioTrackHistorySectionInfo : NSObject
{
    NSString *_indexTitle;
    NSString *_name;
    unsigned long long _numberOfObjects;
    NSArray *_objects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

