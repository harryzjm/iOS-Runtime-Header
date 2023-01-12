//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

__attribute__((visibility("hidden")))
@interface _ISCompositorElement : NSObject
{
    id <ISCompositorRecipe> _recipe;
    NSMutableDictionary *_resourceByName;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *resourceByName; // @synthesize resourceByName=_resourceByName;
@property(retain) id <ISCompositorRecipe> recipe; // @synthesize recipe=_recipe;
- (id)resourceNamed:(id)arg1;
- (void)clearResources;
- (void)addResourcesFromDictionary:(id)arg1;
- (void)setResource:(id)arg1 forName:(id)arg2;
@property(readonly) id <ISCompositorResourceProvider> resourceProvider;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

