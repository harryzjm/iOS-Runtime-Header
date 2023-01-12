//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSActivity, NSMutableSet, NSString;

@interface CLSHandoutAssignedItem <CLSRelationable>
{
    NSString *_currentActivityID;
    NSString *_title;
    NSString *_identifier;
    CLSActivity *_currentActivity;
    NSMutableSet *_bundleIDs;
    int _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)mergeWithObject:(id)arg1;
- (long long)authorizationStatus;
- (long long)effectiveAuthorizationStatus;
- (_Bool)validateObject:(id *)arg1;
- (id)createNewActivity;
@property(readonly, nonatomic) CLSActivity *currentActivity;
@property(readonly, copy, nonatomic) NSMutableSet *bundleIDs;
- (void)addBundleIDs:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *currentActivityID;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2 handoutAttachmentID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
