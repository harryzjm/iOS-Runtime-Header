//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemRelation : NSObject
{
}

+ (id)allRelationWithRelations:(id)arg1;
+ (id)anyRelationWithRelations:(id)arg1;
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;
- (id)description;
- (id)_ui_descriptionBuilder;
- (id)type;
@property(readonly, nonatomic) NSArray *itemStates;
@property(readonly, nonatomic, getter=isFulfilled) _Bool fulfilled;

@end

