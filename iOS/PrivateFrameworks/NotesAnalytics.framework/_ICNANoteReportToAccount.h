//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _ICNANoteReportToAccount : NSObject
{
    float _noteTwoFactorMatrix[10][10];
    int _noteCollaborationMatrix[3][3];
    unsigned long long _countOfNotesWithDocScan;
    unsigned long long _countOfNotesWithInlineDrawingV1;
    unsigned long long _countOfNotesWithInlineDrawingV2;
    unsigned long long _countOfNotesWithFullscreenDrawing;
    unsigned long long _countOfNotesWithTable;
    unsigned long long _countOfNotesWithRichURL;
    unsigned long long _countOfNotesWithMapLink;
    unsigned long long _countOfNotesWithOtherAttachments;
    unsigned long long _countOfNotesWithPaperKit;
    unsigned long long _countOfNotesWithDeepLink;
    unsigned long long _countOfNotesWithTags;
    unsigned long long _countOfNotesWithMentions;
    unsigned long long _scrapPaperCount;
    unsigned long long _countOfScrapPapersWithTags;
    unsigned long long _countOfScrapPapersWithMentions;
    unsigned long long _countOfPinnedScrapPapers;
    unsigned long long _countOfLockedScrapPapers;
    unsigned long long _countOfCollaboratedScrapPapers;
    unsigned long long _countOfScrapPapersWithDocScan;
    unsigned long long _countOfScrapPapersWithInlineDrawingV1;
    unsigned long long _countOfScrapPapersWithInlineDrawingV2;
    unsigned long long _countOfScrapPapersWithFullscreenDrawing;
    unsigned long long _countOfScrapPapersWithTables;
    unsigned long long _countOfScrapPapersWithRichUrl;
    unsigned long long _countOfScrapPapersWithMapLink;
    unsigned long long _countOfScrapPapersWithOtherAttachments;
    unsigned long long _countOfScrapPapersWithPaperKit;
    unsigned long long _countOfScrapPapersWithDeepLink;
    unsigned long long _countOfNotes;
    unsigned long long _countOfChecklists;
    unsigned long long _countOfNotesWithChecklists;
    unsigned long long _countOfPinnedNotes;
    unsigned long long _countOfLockedNotes;
    unsigned long long _countOfV1LockedNotes;
    unsigned long long _countOfV2LockedNotes;
    unsigned long long _countOfLockedNotesWithDivergedMode;
    unsigned long long _countOfLockedNotesWithDivergedPassword;
}

@property(nonatomic) unsigned long long countOfLockedNotesWithDivergedPassword; // @synthesize countOfLockedNotesWithDivergedPassword=_countOfLockedNotesWithDivergedPassword;
@property(nonatomic) unsigned long long countOfLockedNotesWithDivergedMode; // @synthesize countOfLockedNotesWithDivergedMode=_countOfLockedNotesWithDivergedMode;
@property(nonatomic) unsigned long long countOfV2LockedNotes; // @synthesize countOfV2LockedNotes=_countOfV2LockedNotes;
@property(nonatomic) unsigned long long countOfV1LockedNotes; // @synthesize countOfV1LockedNotes=_countOfV1LockedNotes;
@property(nonatomic) unsigned long long countOfLockedNotes; // @synthesize countOfLockedNotes=_countOfLockedNotes;
@property(nonatomic) unsigned long long countOfPinnedNotes; // @synthesize countOfPinnedNotes=_countOfPinnedNotes;
@property(nonatomic) unsigned long long countOfNotesWithChecklists; // @synthesize countOfNotesWithChecklists=_countOfNotesWithChecklists;
@property(nonatomic) unsigned long long countOfChecklists; // @synthesize countOfChecklists=_countOfChecklists;
@property(nonatomic) unsigned long long countOfNotes; // @synthesize countOfNotes=_countOfNotes;
@property(nonatomic) unsigned long long countOfScrapPapersWithDeepLink; // @synthesize countOfScrapPapersWithDeepLink=_countOfScrapPapersWithDeepLink;
@property(nonatomic) unsigned long long countOfScrapPapersWithPaperKit; // @synthesize countOfScrapPapersWithPaperKit=_countOfScrapPapersWithPaperKit;
@property(nonatomic) unsigned long long countOfScrapPapersWithOtherAttachments; // @synthesize countOfScrapPapersWithOtherAttachments=_countOfScrapPapersWithOtherAttachments;
@property(nonatomic) unsigned long long countOfScrapPapersWithMapLink; // @synthesize countOfScrapPapersWithMapLink=_countOfScrapPapersWithMapLink;
@property(nonatomic) unsigned long long countOfScrapPapersWithRichUrl; // @synthesize countOfScrapPapersWithRichUrl=_countOfScrapPapersWithRichUrl;
@property(nonatomic) unsigned long long countOfScrapPapersWithTables; // @synthesize countOfScrapPapersWithTables=_countOfScrapPapersWithTables;
@property(nonatomic) unsigned long long countOfScrapPapersWithFullscreenDrawing; // @synthesize countOfScrapPapersWithFullscreenDrawing=_countOfScrapPapersWithFullscreenDrawing;
@property(nonatomic) unsigned long long countOfScrapPapersWithInlineDrawingV2; // @synthesize countOfScrapPapersWithInlineDrawingV2=_countOfScrapPapersWithInlineDrawingV2;
@property(nonatomic) unsigned long long countOfScrapPapersWithInlineDrawingV1; // @synthesize countOfScrapPapersWithInlineDrawingV1=_countOfScrapPapersWithInlineDrawingV1;
@property(nonatomic) unsigned long long countOfScrapPapersWithDocScan; // @synthesize countOfScrapPapersWithDocScan=_countOfScrapPapersWithDocScan;
@property(nonatomic) unsigned long long countOfCollaboratedScrapPapers; // @synthesize countOfCollaboratedScrapPapers=_countOfCollaboratedScrapPapers;
@property(nonatomic) unsigned long long countOfLockedScrapPapers; // @synthesize countOfLockedScrapPapers=_countOfLockedScrapPapers;
@property(nonatomic) unsigned long long countOfPinnedScrapPapers; // @synthesize countOfPinnedScrapPapers=_countOfPinnedScrapPapers;
@property(nonatomic) unsigned long long countOfScrapPapersWithMentions; // @synthesize countOfScrapPapersWithMentions=_countOfScrapPapersWithMentions;
@property(nonatomic) unsigned long long countOfScrapPapersWithTags; // @synthesize countOfScrapPapersWithTags=_countOfScrapPapersWithTags;
@property(nonatomic) unsigned long long scrapPaperCount; // @synthesize scrapPaperCount=_scrapPaperCount;
@property(nonatomic) unsigned long long countOfNotesWithMentions; // @synthesize countOfNotesWithMentions=_countOfNotesWithMentions;
@property(nonatomic) unsigned long long countOfNotesWithTags; // @synthesize countOfNotesWithTags=_countOfNotesWithTags;
@property(nonatomic) unsigned long long countOfNotesWithDeepLink; // @synthesize countOfNotesWithDeepLink=_countOfNotesWithDeepLink;
@property(nonatomic) unsigned long long countOfNotesWithPaperKit; // @synthesize countOfNotesWithPaperKit=_countOfNotesWithPaperKit;
@property(nonatomic) unsigned long long countOfNotesWithOtherAttachments; // @synthesize countOfNotesWithOtherAttachments=_countOfNotesWithOtherAttachments;
@property(nonatomic) unsigned long long countOfNotesWithMapLink; // @synthesize countOfNotesWithMapLink=_countOfNotesWithMapLink;
@property(nonatomic) unsigned long long countOfNotesWithRichURL; // @synthesize countOfNotesWithRichURL=_countOfNotesWithRichURL;
@property(nonatomic) unsigned long long countOfNotesWithTable; // @synthesize countOfNotesWithTable=_countOfNotesWithTable;
@property(nonatomic) unsigned long long countOfNotesWithFullscreenDrawing; // @synthesize countOfNotesWithFullscreenDrawing=_countOfNotesWithFullscreenDrawing;
@property(nonatomic) unsigned long long countOfNotesWithInlineDrawingV2; // @synthesize countOfNotesWithInlineDrawingV2=_countOfNotesWithInlineDrawingV2;
@property(nonatomic) unsigned long long countOfNotesWithInlineDrawingV1; // @synthesize countOfNotesWithInlineDrawingV1=_countOfNotesWithInlineDrawingV1;
@property(nonatomic) unsigned long long countOfNotesWithDocScan; // @synthesize countOfNotesWithDocScan=_countOfNotesWithDocScan;
- (unsigned long long)countOfNotesWithCollaborationStatus:(long long)arg1 collaborationType:(long long)arg2;
- (unsigned long long)countOfNotesWithFactor:(long long)arg1 andFactor:(long long)arg2;
- (void)completeTwoFactorMatrixReportingForCurrentNote;
- (void)updateNoteCollaborationMatrixWithCollaborationStatus:(id)arg1 collaborationType:(id)arg2;
- (void)updateNoteTwoFactorMatrixWithIndex:(long long)arg1;
- (id)init;

@end

