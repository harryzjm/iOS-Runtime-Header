//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSDate, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFMutableGalleryWorkflow
{
    CKRecordID *identifier;
    NSString *name;
    NSString *shortDescription;
    NSString *longDescription;
    NSNumber *searchable;
    WFWorkflowRecord *workflowRecord;
    NSDate *createdAt;
    NSDate *modifiedAt;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
    WFFileRepresentation *shortcutFile;
    WFFileRepresentation *iconFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFFileRepresentation *iconFile; // @synthesize iconFile;
@property(retain, nonatomic) WFFileRepresentation *shortcutFile; // @synthesize shortcutFile;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(retain, nonatomic) CKRecordID *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt;
@property(retain, nonatomic) WFWorkflowRecord *workflowRecord; // @synthesize workflowRecord;
@property(retain, nonatomic) NSNumber *searchable; // @synthesize searchable;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription;
@property(copy, nonatomic) NSString *shortDescription; // @synthesize shortDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) CKRecordID *identifier; // @synthesize identifier;
@property(retain, nonatomic) WFWorkflowIcon *icon; // @dynamic icon;

@end
