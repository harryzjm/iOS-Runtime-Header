//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, _UIActivityMatchingContext;

__attribute__((visibility("hidden")))
@interface _UIActivityMatchingResults : NSObject
{
    NSMutableSet *_excludedActivityTypesSet;
    _UIActivityMatchingContext *_context;
    NSArray *_orderedActivities;
}

@property(retain, nonatomic) NSArray *orderedActivities; // @synthesize orderedActivities=_orderedActivities;
@property(readonly, nonatomic) _UIActivityMatchingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
- (void)addExcludedActivityTypes:(id)arg1;
- (id)initWithActivityMatchingContext:(id)arg1;

@end

