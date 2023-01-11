//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>
#import <WorkflowKit/WFLoggableObject-Protocol.h>

@class CKRecordID, NSDate, NSDictionary, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFSharedShortcut : NSObject <WFCloudKitItem, WFLoggableObject>
{
    CKRecordID *_identifier;
    NSString *_name;
    WFWorkflowRecord *_workflowRecord;
    NSDate *_createdAt;
    NSString *_createdBy;
    NSNumber *_iconColor;
    NSNumber *_iconGlyph;
    WFFileRepresentation *_shortcutFile;
    WFFileRepresentation *_iconFile;
}

+ (id)properties;
+ (id)recordType;
@property(retain, nonatomic) WFFileRepresentation *iconFile; // @synthesize iconFile=_iconFile;
@property(retain, nonatomic) WFFileRepresentation *shortcutFile; // @synthesize shortcutFile=_shortcutFile;
@property(retain, nonatomic) NSNumber *iconGlyph; // @synthesize iconGlyph=_iconGlyph;
@property(retain, nonatomic) NSNumber *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, nonatomic) NSString *createdBy; // @synthesize createdBy=_createdBy;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) WFWorkflowRecord *workflowRecord; // @synthesize workflowRecord=_workflowRecord;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *propertiesForEventLogging;
- (id)sharingURL;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)ensureFileAssets;
@property(retain, nonatomic) WFWorkflowIcon *icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
