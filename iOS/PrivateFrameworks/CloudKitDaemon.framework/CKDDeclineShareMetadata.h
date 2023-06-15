//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKRoughlyEquivalentProperties, NSString, NSURL;

@interface CKDDeclineShareMetadata : NSObject
{
    NSURL *_shareURL;
    CKRecordID *_shareRecordID;
    NSString *_participantID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

@end

