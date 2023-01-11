//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem>
{
    unsigned short _icon;
    CKRecordID *_identifier;
    NSData *_recordSystemFieldsData;
    NSString *_name;
}

+ (id)collectionIdentifierForRecordID:(id)arg1;
+ (_Bool)isFolderRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 collectionIdentifier:(id)arg2;
+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(nonatomic) unsigned short icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSData *recordSystemFieldsData; // @synthesize recordSystemFieldsData=_recordSystemFieldsData;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)initWithCollection:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
