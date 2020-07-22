//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>

@class NSString;
@protocol MusicEntityProviding, MusicEntityValueProviding;

@interface MusicCopyrightEntityProvider : NSObject <MusicEntityProviding>
{
    id <MusicEntityValueProviding> _copyrightEntityValueProvider;
    _Bool _hasCopyright;
    _Bool _isContainerCopyEntityValueProvider;
    id <MusicEntityProviding> _sourceEntityProvider;
}

@property(readonly, nonatomic) id <MusicEntityProviding> sourceEntityProvider; // @synthesize sourceEntityProvider=_sourceEntityProvider;
- (void).cxx_destruct;
- (void)_reloadHasCopyrightAllowingInvalidation:(_Bool)arg1;
- (void)_sourceEntityProviderDidInvalidateNotification:(id)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithSourceEntityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

