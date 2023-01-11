//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray, NSString;

@interface WFWorkflowOrdering : NSObject <WFCloudKitItem>
{
    CKRecordID *_identifier;
    NSArray *_orderedWorkflowIDs;
}

+ (id)properties;
+ (id)recordType;
@property(copy, nonatomic) NSArray *orderedWorkflowIDs; // @synthesize orderedWorkflowIDs=_orderedWorkflowIDs;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
