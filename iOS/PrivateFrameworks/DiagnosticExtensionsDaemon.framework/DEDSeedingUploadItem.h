//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DEDSeedingUploadItem
{
    _Bool _completed;
    NSString *_extensionID;
    unsigned long long _bytesUploaded;
}

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;
@property _Bool completed; // @synthesize completed=_completed;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
- (void).cxx_destruct;
- (id)description;
- (id)publicDescription;
- (id)promiseFilename;

@end
