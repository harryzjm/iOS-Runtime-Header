//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MusicCompositeEntityViewDescriptor
{
    NSArray *_entityViewDescriptors;
}

@property(copy, nonatomic) NSArray *entityViewDescriptors; // @synthesize entityViewDescriptors=_entityViewDescriptors;
- (void).cxx_destruct;
- (void)_unregisterForRelevantNotificationsFromViewDescriptors;
- (void)_setEntityProviderForEntityViewDescriptors:(id)arg1;
- (void)_registerForRelevantNotificationsFromViewDescriptors;
- (id)_providerListEntityProvider;
- (id)_entityViewDescriptorForEntityProvider:(id)arg1;
- (void)_handleDisplayValuesDidChangeNotification:(id)arg1;
- (void)setEntityProvider:(id)arg1;
- (id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1;
- (_Bool)includesShuffleAction;
- (void)enumerateSectionHeaderContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (_Bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEntityViewDescriptors:(id)arg1;

@end

