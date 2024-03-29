//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore, CNUIContactsEnvironment, _TtC10ContactsUI18DuplicatesUIHelper;
@protocol CNContactDataSource, CNDuplicateContactsControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNDuplicateContactsController : NSObject
{
    _Bool _isPerformingMerge;
    _Bool _isAlreadyFindingDuplicates;
    NSObject<CNContactDataSource> *_dataSource;
    id <CNDuplicateContactsControllerDelegate> _delegate;
    _TtC10ContactsUI18DuplicatesUIHelper *_duplicatesUIHelper;
    CNContactFormatter *_contactFormatter;
    CNUIContactsEnvironment *_environment;
    long long _newDuplicatesCount;
    long long _allDuplicatesCount;
    double _mergeCompletedAt;
}

+ (id)defaultContactFormatter;
+ (id)defaultContactFormatterForDataSource:(id)arg1;
+ (id)os_log;
- (void).cxx_destruct;
@property(nonatomic) double mergeCompletedAt; // @synthesize mergeCompletedAt=_mergeCompletedAt;
@property(nonatomic) _Bool isAlreadyFindingDuplicates; // @synthesize isAlreadyFindingDuplicates=_isAlreadyFindingDuplicates;
@property(nonatomic) long long allDuplicatesCount; // @synthesize allDuplicatesCount=_allDuplicatesCount;
@property(nonatomic) long long newDuplicatesCount; // @synthesize newDuplicatesCount=_newDuplicatesCount;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper; // @synthesize duplicatesUIHelper=_duplicatesUIHelper;
@property(nonatomic) _Bool isPerformingMerge; // @synthesize isPerformingMerge=_isPerformingMerge;
@property(nonatomic) __weak id <CNDuplicateContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void)didSelectUnignoreDuplicate:(id)arg1;
- (void)didSelectIgnoreAllDuplicates:(id)arg1 signaturesIgnored:(id)arg2;
- (void)didSelectMergeAllDuplicates:(id)arg1 signaturesToMerge:(id)arg2;
- (void)didPerformDuplicatesMerge;
- (void)willPerformDuplicatesMerge:(_Bool)arg1;
- (void)duplicatesDidChange;
- (void)performIgnoreAll;
- (void)performMerge:(id)arg1;
- (void)decorateBannerViewCell:(id)arg1;
- (void)presentDuplicatesUIFailureAlertForController:(id)arg1;
- (void)presentSheetBasedMergeForController:(id)arg1 showsIgnored:(_Bool)arg2;
- (_Bool)isInMergeCooldown:(long long)arg1;
- (_Bool)canMergeDuplicates;
- (_Bool)hasNewDuplicates;
- (_Bool)wantsToDisplayNewDuplicatesBanner:(long long)arg1;
- (void)ignoreNewDuplicatesBanner;
@property(nonatomic) long long lastIgnoredNewDuplicatesCount;
- (_Bool)isBusy;
- (void)updateDuplicatesCounts;
- (void)refreshManagedDuplicatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshManagedDuplicates;
- (void)findDuplicates;
- (void)resetDuplicates;
@property(readonly, nonatomic) CNContactStore *contactStore;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 delegate:(id)arg3;

@end

