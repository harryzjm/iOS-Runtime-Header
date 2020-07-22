//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class AVAsset, CSSearchableItem, NSDate, NSString, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource>
{
    AVAsset *_avAsset;
    NSString *_path;
    _Bool _pathWasInvalid;
    _Bool _ignoreChangeForEntityRevision;
    _Bool _hasPendingChangeAffectingEntityRevision;
}

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasPendingChangeAffectingEntityRevision; // @synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_activityURLCreateIfNecessary:(_Bool)arg1;
- (void)_validatePath;
@property(readonly, nonatomic) AVAsset *avAsset;
- (id)detailLabel;
- (id)_labelAllowingEmptyString:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic, getter=isSynced) _Bool synced;
@property(nonatomic, getter=isPendingRestore) _Bool pendingRestore; // @dynamic pendingRestore;
@property(nonatomic) long long recordingID;
@property(nonatomic) long long iTunesPersistentID;
- (void)setCustomLabel:(id)arg1;
- (id)customLabel;
@property(copy, nonatomic) NSString *titleDisallowingEmptyString; // @dynamic titleDisallowingEmptyString;
- (id)label;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)name;
- (void)setName:(id)arg1;
- (void)setLabelPreset:(long long)arg1;
- (long long)labelPreset;
@property(nonatomic) double duration;
@property(readonly, nonatomic) _Bool isContentBeingModified;
- (void)willSave;
- (void)willChangeValueForKey:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, copy, nonatomic) CSSearchableItem *searchableItem;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

