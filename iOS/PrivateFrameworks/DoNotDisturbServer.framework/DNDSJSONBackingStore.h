//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStore-Protocol.h>

@class NSString, NSURL;

@interface DNDSJSONBackingStore : NSObject <DNDSBackingStore>
{
    Class _recordClass;
    NSURL *_fileURL;
    unsigned long long _versionNumber;
}

- (void).cxx_destruct;
- (_Bool)writeAllRecords:(id)arg1 withError:(id *)arg2;
- (id)readAllRecordsWithError:(id *)arg1 lastUpdateDate:(out id *)arg2;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

