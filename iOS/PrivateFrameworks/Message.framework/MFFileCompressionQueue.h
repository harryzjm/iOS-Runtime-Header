//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class NSMutableArray, NSString;

@interface MFFileCompressionQueue : NSObject <EFLoggable>
{
    struct os_unfair_lock_s _fileCompressionQueueLock;
    NSMutableArray *_fileCompressionQueue;
}

+ (id)sharedInstance;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *fileCompressionQueue; // @synthesize fileCompressionQueue=_fileCompressionQueue;
- (long long)size;
- (id)nextFile;
- (_Bool)hasNext;
- (void)addFile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
