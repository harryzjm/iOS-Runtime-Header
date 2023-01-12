//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, SIRINLUEXTERNALUUID;

@interface CDMSELFRequestLinkData : NSObject
{
    SIRINLUEXTERNALUUID *_nlId;
    NSString *_resultCandidateId;
    unsigned long long _splitCount;
    NSString *_targetName;
    NSUUID *_targetUUID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property(retain) NSString *targetName; // @synthesize targetName=_targetName;
@property unsigned long long splitCount; // @synthesize splitCount=_splitCount;
@property(retain) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain) SIRINLUEXTERNALUUID *nlId; // @synthesize nlId=_nlId;

@end
