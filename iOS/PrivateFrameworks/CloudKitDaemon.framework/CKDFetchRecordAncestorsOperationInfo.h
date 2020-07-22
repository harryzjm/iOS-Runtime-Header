//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordAncestorsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

