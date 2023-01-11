//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSectionedCollection, NSDictionary, NSMutableDictionary;

@interface MPStoreLibraryPersonalizationRequest
{
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPSectionedCollection *_representedObjects;
}

+ (id)defaultLibraryView;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)sharedQueue;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MPSectionedCollection *representedObjects; // @synthesize representedObjects=_representedObjects;
@property(readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
- (void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)propertiesForItemAtIndexPath:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)initWithUnpersonalizedContentDescriptors:(id)arg1;

@end

