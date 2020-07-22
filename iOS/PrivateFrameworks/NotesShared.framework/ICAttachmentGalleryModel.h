//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CROrderedSet, ICCRDTIdentifierOrderedSetVersionedDocument;

@interface ICAttachmentGalleryModel
{
    ICCRDTIdentifierOrderedSetVersionedDocument *_attachmentIdentifiersOrderedSetDocument;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property(retain, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument; // @synthesize attachmentIdentifiersOrderedSetDocument=_attachmentIdentifiersOrderedSetDocument;
- (void).cxx_destruct;
- (void)undeleteSubAttachments;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(_Bool)arg1;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (short)sectionForSubAttachments;
- (void)writeMergeableData;
- (_Bool)mergeWithMergeableData:(id)arg1;
@property(readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet; // @dynamic attachmentIdentifiersOrderedSet;
- (id)singleSubAttachmentAtIndex:(unsigned long long)arg1;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1;
- (id)subAttachmentIdentifiers;
- (unsigned long long)subAttachmentsCount;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1;
- (void)enumerateSubAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeSubAttachment:(id)arg1;
- (void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSubAttachment:(id)arg1;
- (_Bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (_Bool)showThumbnailInNoteList;
- (id)titleForSubAttachment:(id)arg1;
- (_Bool)attachmentHasMergeableData;
- (id)firstSubAttachment;
- (_Bool)hasThumbnailImage;
- (id)previewImageTypeUTI;
- (_Bool)canSaveURLWithOtherAttachments;
- (_Bool)canSaveURL;
- (_Bool)hasPreviews;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentWillTurnIntoFault;

@end

