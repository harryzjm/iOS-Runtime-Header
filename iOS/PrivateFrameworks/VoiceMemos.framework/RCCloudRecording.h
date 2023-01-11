//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/RCMutableRecording-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString, NSURL;
@protocol _NSFileBackedFuture;

@interface RCCloudRecording : NSManagedObject <RCMutableRecording>
{
    AVAsset *_avAsset;
}

+ (id)playablePredicate;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)_activityURLCreateIfNecessary:(_Bool)arg1;
- (void)_validatePath;
@property(readonly, nonatomic) AVAsset *avAsset;
- (id)_detailLabel;
- (id)_labelAllowingEmptyString:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isContentBeingModified;
@property(readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setTitle:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
- (void)setEditing:(_Bool)arg1;
@property(readonly, nonatomic) _Bool editing;
- (void)setManuallyRenamed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool manuallyRenamed;
- (void)setPlayable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool playable;
@property(nonatomic) _Bool evicted;
@property(nonatomic) _Bool pendingRestore;
@property(nonatomic) _Bool synced;
- (_Bool)synchronizeWithExistingAudioFuture:(id *)arg1;
- (void)setLocation:(id)arg1;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(copy, nonatomic) NSDate *evictionDate; // @dynamic evictionDate;
@property(copy, nonatomic) NSString *path; // @dynamic path;
- (void)willSave;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)searchableItem;

// Remaining properties
@property(retain, nonatomic) id <_NSFileBackedFuture> audioFuture; // @dynamic audioFuture;
@property(copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) unsigned long long flags; // @dynamic flags;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long iTunesPersistentID; // @dynamic iTunesPersistentID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *uniqueID; // @dynamic uniqueID;

@end

