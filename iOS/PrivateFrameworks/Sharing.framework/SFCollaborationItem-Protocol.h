//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFObservable-Protocol.h>

@class LPLinkMetadata, NSArray, NSItemProvider, NSString, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions, SLCollaborationFooterViewModel;
@protocol SFCollaborationItemChangeObserver;

@protocol SFCollaborationItem <SFObservable>
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property(readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, nonatomic) _Bool isLoading;
@property(retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property(copy, nonatomic) NSArray *options;
@property(copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property(readonly, nonatomic) SFCollaborationMetadata *metadata;
@property(readonly, nonatomic) id activityItem;
@property(readonly, nonatomic) id placeholderActivityItem;
@property(readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property(readonly, copy, nonatomic) NSArray *sendCopyItems;
@property(readonly, nonatomic) _Bool defaultCollaboration;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)unregisterChangeObserver:(id <SFCollaborationItemChangeObserver>)arg1;
- (void)registerChangeObserver:(id <SFCollaborationItemChangeObserver>)arg1;
- (SLCollaborationFooterViewModel *)createCollaborationFooterViewModel;
@end

