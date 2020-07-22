//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage
{
    NSMutableSet *mAuthors;
}

@property(readonly, nonatomic) NSSet *authors; // @synthesize authors=mAuthors;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)nextAuthorColor;
- (id)authorWithName:(id)arg1;
- (void)removeAuthor:(id)arg1;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(_Bool)arg2;
- (void)addAuthor:(id)arg1;
- (void)dealloc;

@end
