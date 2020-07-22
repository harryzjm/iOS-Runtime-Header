//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, _UILibArchiveStreamingReader;

__attribute__((visibility("hidden")))
@interface _UIArchiveListingController : NSObject
{
    _UILibArchiveStreamingReader *_archiveReader;
    _Bool _isValidArchive;
    _Bool _excludeDotFilesFromResults;
    NSString *_archivePath;
    long long _appleDoubleIdentificationType;
}

@property(nonatomic) _Bool excludeDotFilesFromResults; // @synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults;
@property(nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (void).cxx_destruct;
- (_Bool)_shouldVisitItem:(id)arg1;
- (_Bool)enumerateLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)determineIsReadableArchive;
- (void)dealloc;
- (id)initWithArchivePath:(id)arg1;

@end

