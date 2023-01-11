//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class BRFileObjectID, NSArray;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>
{
    BRFileObjectID *_folderID;
    unsigned long long _uploadCompletedSize;
    unsigned long long _uploadTotalSize;
    unsigned long long _downloadCompletedSize;
    unsigned long long _downloadTotalSize;
    NSArray *_parentFileIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadTotalSize; // @synthesize downloadTotalSize=_downloadTotalSize;
@property(nonatomic) unsigned long long downloadCompletedSize; // @synthesize downloadCompletedSize=_downloadCompletedSize;
@property(nonatomic) unsigned long long uploadTotalSize; // @synthesize uploadTotalSize=_uploadTotalSize;
@property(nonatomic) unsigned long long uploadCompletedSize; // @synthesize uploadCompletedSize=_uploadCompletedSize;
@property(copy, nonatomic) BRFileObjectID *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSArray *parentFileIDs; // @synthesize parentFileIDs=_parentFileIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
