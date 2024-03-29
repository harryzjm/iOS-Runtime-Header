//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDContainerRep.h>

@class NSString;

@interface TNPageContentRep : TSDContainerRep
{
}

- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)pageController;
- (Class)layerClass;
- (_Bool)isOpaque;
- (_Bool)directlyManagesLayerContent;
- (_Bool)masksToBounds;
- (void)willBeRemoved;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

