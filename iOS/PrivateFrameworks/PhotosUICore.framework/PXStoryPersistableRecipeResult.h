//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXStoryMiroMemoryConverter;
@protocol PFStoryRecipe;

@interface PXStoryPersistableRecipeResult : NSObject
{
    id <PFStoryRecipe> _recipe;
    PXStoryMiroMemoryConverter *_miroInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXStoryMiroMemoryConverter *miroInfo; // @synthesize miroInfo=_miroInfo;
@property(readonly, nonatomic) id <PFStoryRecipe> recipe; // @synthesize recipe=_recipe;
- (id)initWithPersistableRecipe:(id)arg1 miroInfo:(id)arg2;
- (id)initWithPersistableRecipe:(id)arg1;
- (id)init;

@end
