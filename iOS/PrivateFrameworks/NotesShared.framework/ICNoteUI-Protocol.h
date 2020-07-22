//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSAttributedString, NSMutableDictionary, TTMergeableStringVersionedDocument;

@protocol ICNoteUI <NSObject>

@optional
- (NSAttributedString *)uiAttributedString;
- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (_Bool)shouldReleaseTextStorageWhenTurningIntoFault;
@end

